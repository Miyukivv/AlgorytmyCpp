/*
W XXV wieku organizacja podróżników w czasie Kronostat dba o to, by przyszłość ludzkości nie zamieniła się w kompletną katastrofę. A tym razem zagrożenie jest poważne - bez odkrycia radu przez Marię Skłodowską-Curie i jej męża Pierre’a, medycyna przyszłości wyląduje na śmietniku historii. Ale problem jest prostszy, niż by się wydawało - Maria i Pierre po prostu nie zdążą przerzucić ton blendy uranowej, z której mają wyodrębnić rad. Ot, klasyczny problem "za dużo blendy, za mało czasu".
Na ratunek przybywa trio z Kronostatu - Grażyna, Janusz i Stach, najlepsi agenci, jakich można znaleźć w XXV wieku (a przynajmniej najlepsi, którzy akurat mieli czas). 

Ich misja? Pomóc Marii i Pierre'owi przerzucić tony tej nieszczęsnej blendy, zanim rad zniknie na zawsze w otchłaniach nieodkrytej historii. Wyposażeni w niezastąpione umiejętności organizacyjne, 
improwizacyjne i dyplomatyczne, nasza trójka podróżników rzuca się do pracy - choć z pewnymi ograniczeniami, bo nie mogą za bardzo zmieniać biegu historii. No i nie mogą używać technologii z przyszłości. 
Więc tak, o laserach i robotach mogą zapomnieć - zostają z łopatami i wiadrami.
Janusz, jak to Janusz, próbował najpierw sklecić coś z taśmy klejącej i paru patyków, ale Grażyna szybko sprowadziła go na ziemię: "Nie ma cudów, Janusz, będziemy musieli kopać." 
Stach za to już zdołał przekonać paru XIX-wiecznych chłopów do pomocy, ale pojawił się nowy problem: ludzie zaczynają się męczyć. 

Z każdym dniem ich wydajność spada - pierwszego dnia przerzucają C ton blendy, ale każdego kolejnego dnia o K ton mniej. 
Pracownik, który stracił całą swoją wydajność, wraca zmęczony do domu. A przecież czas ucieka!
Podróżnicy z Kronostatu zadają sobie teraz tylko jedno pytanie: czy zdążą przerzucić blendę, zanim historia się posypie? 

Jeśli im się nie uda, będą musieli zastosować Efekt Janusza (czyli ostateczne, desperackie rozwiązanie polegające na zasadzie "Janusz coś wymyśli", 
nawet jeśli oznacza to kompletne prowizorki, które ledwo się trzymają kupy).

Wejście:
Na wejściu znajdują się liczba dodania t, oznaczająca liczbę danych testowych. Każdy zestaw składa się z trzech liczb naturalnych: n, d oraz m, oznaczających kolejno liczbę chłopów do pomocy, 
liczbę zapytań o dni i wymaganą liczbę ton blendy. Następnie otrzymuje się n linii, gdzie każda linia zawiera dwie liczby całkowite: wydajność C i redukcję wydajności K kolejnych chłopów. 
Ostatnia linia zestawu testowego to d liczb dodatnich, oznaczających liczbę dni.
1 ≤ t ≤ 10
1 ≤ n ≤ 1000
1 ≤ d ≤ 1000000
1 ≤ m ≤ 10000000
1 ≤ K ≤ C ≤ 10000

Wyjście:
Na wyjściu przy każdym zestawie testowym należy dla każdej spośród d liczb wyświetlić informację o liczbie ton blendy przerzuconych do d_i dnia oraz w drugiej linii liczbę zapytań, 
dla których udało się przerzucić wymaganą liczbę ton blendy.
Przykład:

Wejście:
2
2 3 100
20 10
30 5 
5 1 100
1 2 15
5 2
1 3

Wyjście:
130 50 135 
2
5 9 
0
*/

#include <iostream>

unsigned long int sum_tons_for_one_day(unsigned int n, int days, int *C, int *K,int *max)
{
    unsigned long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if ((max[i] + 1) > days)
        {
            sum += (C[i] * days - K[i] * days * (days - 1) / 2);
        }
        else
        {
            sum += (C[i] * (max[i] + 1) - K[i] *max[i] * (max[i] + 1) / 2);
        }
    }
    return sum;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    unsigned int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        unsigned int n, d, m;
        std::cin >> n >> d >> m;

        int *C=new int[n];
        int *K=new int[n];
        int *max=new int[n];

        for (int j = 0; j < n; j++)
        {
            std::cin >> C[j] >> K[j];
            max[j]=C[j]/K[j];
        }

        unsigned int number_of_correct_days = 0;

        for (int j = 0; j < d; j++)
        {
            unsigned int day;
            std::cin >> day;

            unsigned long int sum_for_the_day = sum_tons_for_one_day(n, day, C, K, max);
            std::cout << sum_for_the_day << " ";
            if (sum_for_the_day >= m)
            {
                number_of_correct_days++;
            }
        }

        delete[] C;
        delete[] K;

        std::cout << "\n"
                  << number_of_correct_days << "\n";
    }

    return 0;
}