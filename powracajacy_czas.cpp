/*
Co by się stało, gdyby podróżnik w czasie cofnął się do przeszłości i powstrzymał (umyślnie lub przez przypadek) spotkanie swoich rodziców? Spowodowałoby to, że nigdy by się nie spotkali, 
a podróżnik nigdy by się nie urodził. Skoro jednak nie istniałby, nie mógłby cofnąć się w czasie, by powstrzymać spotkanie swoich rodziców – co z kolei oznacza, że w końcu by się urodził...
Problem ten, bardziej znany jako Paradoks Dziadka, jest jednym z klasycznych paradoksów związanych z podróżami w czasie. 
W takim przypadku dochodzi do zapętlenia czasu, w wyniku którego tworzy się cykl powiązanych wydarzeń. Formalnie rzecz biorąc, mamy zamknięty ciąg zdarzeń o długości N: e1 < e2 < ... < eN, 
gdzie wydarzenie eN jest powiązane z wydarzeniem e1. Wartości ei są liczbami całkowitymi, oznaczającymi znacznik czasowy wydarzenia.

Grażyna, Janusz i Stach nie mieli tym razem szczęścia – trafili do pewnego punktu takiego cyklu czasowego. Nie wiedzą, w którym punkcie cyklu się znajdują ani ile wydarzeń zawiera cykl, 
w którym utknęli. Wehikuł czasu, zgodnie z protokołem kryzysowym, natychmiast przeszedł w tryb przywracania i dla bezpieczeństwa pozwala jedynie podróżować w przód po kolejnych wydarzeniach w tym cyklu. 
Zgodnie z procedurą, pierwszym krokiem w takiej sytuacji powinno być zbadanie długości cyklu. Sytuacja na pokładzie zaczęła jednak robić się napięta. Grażyna nalega, 
by postępować zgodnie z protokołem, a Janusz twierdzi, że znalezienie rozwiązania zajmie wieki, więc zaraz wymyśli jakieś lepsze wyjście. 

Wtedy do akcji wkroczył Stach, który obiecał, że znajdzie szybkie rozwiązanie, pozwalające ustalić długość cyklu. Pomóż mu w tym zadaniu.
Wehikuł czasu w trybie przywracania udostępnia tylko jedną operację:

int time_jump(unsigned int t);

Operacja ta, dla zadanego kroku t, pozwala przeskoczyć do wydarzenia oddalonego od aktualnego wydarzenia ei o t wydarzeń, tj. do wydarzenia ei+t (uwzględniając zapętlenie czasu). Zwraca ona znacznik czasowy tego nowego wydarzenia (wartość ei+t). Wykonanie operacji time_jump(0) spowoduje zwrócenie znacznika czasowego aktualnego wydarzenia (wartość ei).

Wejście
Na wejściu program otrzymuje liczbę naturalną T oznaczającą liczbę zestawów danych. Dla każdego testu zdefiniowane są funkcje:

int time_jump(unsigned int t);
void next_test();

Funkcja next_test() pozwala załadować kolejny* zestaw danych (cykl, dla którego należy znaleźć jego długość).
*Wywołanie tej funkcji po ostatnim zestawie danych nie zakończy się błędem (załadowany zostanie pierwszy cykl).
1 ≤ T ≤ 100 000
1 ≤ N ≤ 10 9
-10 9 ≤ ei ≤ 10 9 dla każdego 1 ≤ i ≤ N

Wyjście
Na wyjściu program powinien wypisać T liczb, z których każda reprezentuje długość cyklu dla odpowiedniego zestawu danych. 
Liczby powinny być oddzielone spacjami.
Przykład
Wejście
2

Ukryte cykle
cykl 1: {-1300, -893, -86, 4, 6, 79, 102, 745, 1945, 2345}
cykl 2: {-101, -100, 17, 1900, 2400}    
*/

#include <iostream>

int time_jump(unsigned int t);
void next_test();

int find_length()
{
    int jump_from_start = 0;
    int leapSize = 1;

    int A = time_jump(0);
    int B = time_jump(0);
    int C = time_jump(leapSize);

    int left = 0, right = 0, mid = 0;
    // Jak jest tylko jeden element w cyklu
    if (A == C)
    {
        return leapSize;
    }

    while (true)
    {
        if (A == C)
        {
            return leapSize;
        }
        B = C;
        C = time_jump(leapSize);

        if (A < B && B <= C) // tu nic sie nie dzieje, normalny przebieg
        {
            jump_from_start += leapSize;
            leapSize *= 2;
        }
        else if (C < A && A < B)
        {
            jump_from_start += leapSize;
            leapSize *= 2;
        }
        else if (B <= C && C < A)
        {
            jump_from_start += leapSize;
            leapSize *= 2;
        }
        else if (A == C)
        {
            return leapSize + jump_from_start+1;
        }
        else
        {
            left = jump_from_start;
            right = jump_from_start + leapSize;
            mid = (right + left) / 2;
            break;
        }
    }

    B = C;
    C = time_jump(mid);


    while (B != C)
    {
        if (left == mid)
        {
            mid = right;
        }
        A = time_jump(0);
        B = time_jump(mid);
        C = time_jump(mid);

        if ((C < A && A < B) || (A < B && B < C))
        {
            right = mid;
            mid = (left + right) / 2;
        }
        else if ((C < B && B < A) || (B < A && A < C))
        {
            left = mid;
            mid = (left + right) / 2;
        }

        else if (B == C)
        {
            return mid;
        }
    }
    return mid;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    int t;

    std::cin >> t;
    // t = 12;

    for (int i = 0; i < t; i++)
    {
        std::cout << find_length() << " ";
        next_test();
    }

    return 0;
}