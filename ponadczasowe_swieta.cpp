/*
Zbliżają się Święta, a to oznacza, że Święty Mikołaj ma pełne ręce pracy. Choć wiele osób wyjaśnia jego zdolność dostarczania prezentów do milionów domów w jedną noc za pomocą magii, 
prawda jest znacznie prostsza i bardziej logiczna. Święty Mikołaj to po prostu podróżnik w czasie!

W tym roku nie obyło się bez problemów. W Fabryce Świętego Mikołaja doszło do opóźnień z powodu chaosu w dokumentacji. Okazało się, że kolorowe łańcuchy świąteczne, 
które miały posłużyć do dekoracji ogrodzenia wokół fabryki, są zbyt krótkie, co spowodowało zakłócenia w pracy elfów. (W linii czasowej Świętego Mikołaja elfy to nie tylko legenda). 
Końce łańcucha muszą być zaczepione o odpowiednio lewy i prawy słupek przęsła. Łańcuch można skrócić, ale nie da się go wydłużyć. Aby zminimalizować koszty, 
fabryka planuje zamówić wszystkie łańcuchy w jednym rozmiarze – wystarczająco długim, by pasowały do każdego przęsła ogrodzenia, lecz nie nadmiernie długim, 
co mogłoby zwiększyć obciążenie elfów.

Ogrodzenie fabryki składa się z n słupków rozmieszczonych w nieregularnych odległościach (słupki te są jednak w miarę równomiernie rozłożone w pewnym zakresie). 
Oznacza to, że przęsła mogą mieć różne długości. W dokumentacji zapisano pozycje wszystkich słupków, lecz są one podane w losowej kolejności. 
Elfy nie mogą sobie pozwolić na błędy, dlatego poprosiły o pomoc Kronostatu. Zadaniem Grażyny, Janusza i Stacha jest przejrzenie dokumentacji i ustalenie długości najdłuższego przęsła ogrodzenia. 
Dzięki temu Fabryka Świętego Mikołaja będzie mogła zamówić łańcuchy o odpowiedniej długości.
Wejście

W pierwszej linii wejścia znajduje się liczba naturalna n (2 ≤ n ≤ 2 000 000) oznaczająca liczbę słupków ogrodzenia. 
W kolejnej linii znajduje się n liczb rzeczywistych -10 9 ≤ pi ≤ 10 9 — pozycje słupków ogrodzenia w losowej kolejności.

Wyjście
Na wyjściu należy wypisać jedną liczbę rzeczywistą — długość najdłuższego przęsła z dokładnością do 4 miejsc po przecinku.

Przykład
Wejście
8
7.6 -2.0 12.0 0.3 9.3 2.0 4.5 5.1

Wyjscie
2.7000

Uwaga! Rozwiązanie ma opierać się na algorytmie sortowania w czasie liniowym. Nie można używać STL.

[Wielka Inflacja](wielka_inflacja.cpp/)

Kolejną misją Grażyny, Janusza i Stacha jest złagodzenie skutków hiperinflacji, która dotknęła Polskę na przełomie lat 80. i 90. XX wieku.
W tamtym okresie cała gospodarka chwiała się w posadach. Szczególnie ciężko mieli przedsiębiorcy (nazywani wówczas prywaciarzami). 
Załoga Kronostatu musiała więc na chwilę odstąpić od prostowania linii czasu i zająć się księgowością – oczywiście w jej kreatywnej wersji.

Janusz i Stach mają za zadanie odnaleźć przedsiębiorców w tarapatach,
co nie jest szczególnie trudnym wyzwaniem. Grażyna, jako mózg operacji i główna księgowa zespołu, 
musi zebrać od przedsiębiorców wykazy sprzedanych towarów i spróbować przyporządkować poszczególne produkty do najbardziej korzystnych kategorii podatkowych. 
Dzięki temu przedsiębiorcy zapłacą niższe podatki, co pomoże im uratować swoje biznesy.


Grażyna doszła do wniosku, że odrobina kreatywności w tym przypadku nie zaszkodzi. 
Uważa ona, że najdroższy produkt, wyceniony na 5000 zł, nie powinien być w całości opodatkowany, ponieważ jego cena wynika z wartości wielu części składowych, a nie za wszystkie z nich należy naliczać podatek. Zdecydowała, że kwotę 4000 zł, która podlega opodatkowaniu, należy obciążyć najniższą stawką podatkową wynoszącą 5%. Z kolei "dla równowagi" najtańszy produkt powinien zostać opodatkowany najwyższą stawką – 30%. Grażyna jest przekonana, że Urząd Skarbowy nie powinien mieć zastrzeżeń. A jeśli jednak pojawią się wątpliwości, ma nietypowe rozwiązanie: należy wysłać urzędników na miesiąc do średniowiecza, co jej zdaniem skutecznie rozwiąże problem.

Pamiętaj, że jeżeli dana lista zawiera M produktów, to zawiera również M stawek podatkowych. 
Stawki te nie muszą być unikatowe. W obliczeniach Grażyna musi wykorzystać wszystkie M wartości.
Napisz program, który obliczy najniższą wartość podatku jaką mogą zapłacić przedsiębiorcy

Wejście
W pierwszej linii wejścia znajduje się liczba naturalna n - ilość przedsiębiorców, którym trzeba pomóc.
Następnie n-razy należy pobrać ze standardowego wejścia:
o - ilość operacji do wykonania dla danego przedsiębiorcy.
Kolejno pobieramy o linii w formacie:
a p t - dodaj produkt w cenie p zł, obłożony podatkiem t%
lub p x - zmień cenę najdroższego produktu o x (jeśli ta operacja nie jest możliwa - nie rób nic).

Wyjście
Na wyjściu powinniśmy otrzymać n linii z wyliczonym najniższym podatkiem dla każdego przedsiębiorcy wyrażony w groszach.

Przykład:
Wejście:
2
10
a 1000 20
a 1200 10
a 900  5
a 1500 30
p 100
a 3000 40
p -200
p -100
a 20 20
a 30 4
8
a 970 20
a 1800 10
a 1900  5
a 150 30
a 2000 40
p -200
a 50 10
a 9000 4
	
Wyjście:
70500
107400

UWAGA! Zadanie należy rozwiązać samodzielnie implementując kopiec!
*/

#include <iostream>

struct Bucket
{
    float min;
    float max;
    bool empty = true;
};

void print_positions(int n, float *positions)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << positions[i] << " ";
    }
    std::cout << "\n";
}

float the_longest_distance(Bucket *buckets, int n)
{
    float the_longest_distance = 0.0;
    float prev_max = buckets[0].max;

    for (int i = 0; i < n; i++)
    {
        float distance;
        if (buckets[i].empty != true)
        {
            distance = buckets[i].min - prev_max;
            if (distance > the_longest_distance)
            {
                the_longest_distance = distance;
            }
            prev_max = buckets[i].max;
        }
    }
    return the_longest_distance;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;

    float *positions = new float[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> positions[i];
    }
    float min_position = positions[0];
    float max_position = positions[0];

    for (int i = 1; i < n; i++)
    {
        if (positions[i] < min_position)
        {
            min_position = positions[i];
        }
        if (positions[i] > max_position)
        {
            max_position = positions[i];
        }
    }

    float width_of_the_bucket = (max_position - min_position) / (n - 1);

    Bucket *buckets = new Bucket[n];

    for (int i = 0; i < n; i++)
    {
        buckets[i].min = max_position;
        buckets[i].max = min_position;
    }

    for (int i = 0; i < n; i++)
    {
        int index = (positions[i] - min_position) / width_of_the_bucket;
        if (index >= n)
        {
            index = n - 1;
        }

        if (buckets[index].empty == true)
        {
            buckets[index].empty = false;
            buckets[index].min = positions[i];
            buckets[index].max = positions[i];
        }
        else
        {
            if (positions[i] < buckets[index].min)
            {
                buckets[index].min = positions[i];
            }
            if (positions[i] > buckets[index].max)
            {
                buckets[index].max = positions[i];
            }
        }
    }
    std::printf("%.4f\n", the_longest_distance(buckets, n));

    delete[] buckets;
    delete[] positions;
    return 0;
}