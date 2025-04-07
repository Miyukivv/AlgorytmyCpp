/*
Jedną z misji Kronostatu jest pilnowanie, aby podróże w czasie nie wpłynęły na główną linię czasu. 
W tym celu agenci organizacji muszą często naprawiać błędy innych podróżników, którzy pozostawiają za sobą nielegalne artefakty w różnych epokach.

Grażyna — znana z tego, że potrafi zorganizować misję czasową co do sekundy, z uwzględnieniem każdej możliwej zmiennej — niedawno zakończyła długą misję zbierania przedmiotów, 
które nie powinny znaleźć się w przeszłości.

Ostatecznym krokiem jej operacji jest zdeponowanie tych artefaktów w Sejfie Paradoksu, potężnym urządzeniu manipulującym przestrzenią, stworzonym w XXV wieku. 
Sejf Paradoksu to urządzenie o zadziwiających właściwościach: bez względu na to, ile przedmiotów już się w nim znajduje, zawsze można dołożyć więcej. 
Jednak nie jest to takie proste — każde dołożenie wymaga energii. Im więcej przedmiotów znajduje się już w sejfie, tym więcej energii potrzeba, 
aby „skompresować” zawartość i przechować nowy artefakt.

Nasza agentka, znana ze swojej obsesyjnej precyzji, chce zaplanować wkładanie przedmiotów do Sejfu Paradoksu w taki sposób, aby zużyć jak najmniej energii. 
Za każdym razem, gdy już ułoży kolejność, szybko znajduje lepsze rozwiązanie. 
To nieustanne dążenie do perfekcji sprawia, że traci zbyt wiele czasu na zastanawianie się.

Grażyna zebrała listę identyfikatorów artefaktów oraz ich masy. Sejf Paradoksu działa w taki sposób, że koszt energetyczny dodania przedmiotu o masie x kg do sejfu, 
w którym znajduje się już y kg przedmiotów, wynosi dokładnie x + y kJ. 
Janusz próbował coś wymyślić, ale chociaż jego pomysłowość nie zna granic, to jak zwykle było to tylko prowizoryczne rozwiązanie. 
Oznacza to, że część przedmiotów może być już prawidłowo uporządkowana.

Twoim zadaniem jest zaplanowanie kolejności wkładania przedmiotów do Sejfu Paradoksu tak, aby zużyć jak najmniej energii. 
Jeśli istnieje kilka przedmiotów o takiej samej masie, należy je wkładać w kolejności, w jakiej występują na liście.

Wejście
W pierwszej linii wejścia znajduje się liczba naturalna t, czyli liczba zestawów danych. Każdy zestaw rozpoczyna się liczbą naturalną n, która określa liczbę artefaktów w danym zestawie. 
Następnie w kolejnych n liniach znajdują się opisy artefaktów. 
Każdy opis składa się z identyfikatora artefaktu (jednowyrazowy ciąg znaków) oraz liczby naturalnej m, oznaczającej masę przedmiotu w kilogramach.


Wyjście
Na wyjściu dla każdego zestawu danych należy wypisać dwie informacje: minimalną łączną ilość energii potrzebną do włożenia wszystkich artefaktów do Sejfu Paradoksu, 
a w kolejnej linii — listę identyfikatorów artefaktów w takiej kolejności, w jakiej należy je wkładać, aby zużyć jak najmniej energii.

UWAGA! W zadaniu nie można używać bibliotek STL. Należy wykorzystać samodzielnie napisany algorytm sortujący.

Przykład:
Wejście:
2
5
rower_elektryczny-1453 12
smartfon-1890 1
dron_z_kamera-2000pne 4
przenosna_lodowka-753 8
teleporter_do_kawy-2024 4
3
skaner_mysli-1984 7
teletransporter-3210pne 133
noktowizor-1410 1

Wyjście:
61
smartfon-1890 dron_z_kamera-2000pne teleporter_do_kawy-2024 przenosna_lodowka-753 rower_elektryczny-1453
150
noktowizor-1410 skaner_mysli-1984 teletransporter-3210pne 

*/
#include <iostream>
#include <string>

struct Artifact
{
    std::string name_of_artifact;
    int weight;
};

void insertion_sort(Artifact *artifacts, unsigned int number_of_artifacts)
{
    Artifact tmp;
    for (int i = 1; i < number_of_artifacts; i++)
    {
        tmp = artifacts[i];
        int j = i - 1;

        while (j >= 0 && artifacts[j].weight > tmp.weight)
        {
            artifacts[j + 1] = artifacts[j];
            j = j - 1;
        }
        
        artifacts[j + 1] = tmp;
    }
}

unsigned long int sum(Artifact *artifacts, unsigned int number_of_artifacts)
{
    unsigned long int sum=0;
    unsigned long int arr_with_sums[number_of_artifacts];


    for (int i = 0; i < number_of_artifacts; i++)
    {
        sum += artifacts[i].weight;
        arr_with_sums[i] = sum;
    }

    sum = 0;
    for (int i = 0; i < number_of_artifacts; i++)
    {
        sum += arr_with_sums[i];
    }

    return sum;
}

int main()
{
    unsigned int t; // liczba zestawow

    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        unsigned int number_of_artifacts;
        std::cin >> number_of_artifacts;

        Artifact *artifacts = new Artifact[number_of_artifacts];

        for (int j = 0; j < number_of_artifacts; j++)
        {
            std::cin >> artifacts[j].name_of_artifact >> artifacts[j].weight;
        }
        insertion_sort(artifacts, number_of_artifacts);

        std::cout << sum(artifacts, number_of_artifacts) << "\n";
        for (int j = 0; j < number_of_artifacts; j++)
        {
            std::cout << artifacts[j].name_of_artifact << " ";
        }

        delete[] artifacts;
    }

    return 0;
}