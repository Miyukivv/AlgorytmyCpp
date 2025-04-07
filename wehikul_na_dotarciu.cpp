/*
Po długich godzinach spędzonych w Reptyliance Januszowi udało się rozwiązać problem nieziemskich kolejek. Za swoją pomysłowość dostał on solidny rabat, 
dzięki któremu mógł kupić wszystkie niezbędne części do wehikułu czasu. Kosmicznego grosza wystarczyło nawet na zakup kebsa "Mc. Woovitch", 
z sosem ostrym jak woń atmosfery Urana, dla Stacha i Grażyny.

Uraczeni smakiem wytwornego dania członkowie Kronostatu przystąpili do naprawy wehikułu. 
Naprawa (wbrew prawu Murphiego) poszła bez najmniejszych problemów i w czasie krótszym niż dzień na Jowiszu nasza załoga mogła wykonać, 
pierwszą od dłuższego czasu, podróż w czasie. Żądni przygód załoganci postanowili wyruszyć w przyszłość by odreagować napiętą atmosferę panującą po ostatnich wydarzeniach. 

Grażyna zaproponowała rok 5129, w którym można było zaszaleć, gdyż swoją trasę koncertową po Drodze Mlecznej miał wtedy największy gwiazdor we Wszechświecie "73N3K MARS TYTANIUK". 
Stach wprowadził w terminalu wspomnianą datę i kliknął ENTER, po czym 3...2...1... nasza grupa znalazła się w roku 1295... (prawo Murphiego jednak działa). Winowajcą całego zdarzenia był, 
jak się można łatwo domyśleć, ostry sos, który beztrosko kapał z kebaba Janusza wprost na Panel Sterowania. Janusz, jak to Janusz, kazał pozostałym załogantom nie panikować - przecież wkrótce coś wymyśli. 
Po kilku godzinach spędzonych w błocie za chłopską chatą, w której stał wehikuł, Janusz wpadł na pomysł.

Pomysł Janusza był prosty, a zarazem genialny: wehikuł musi "rozchodzić" tego kebaba - a nie ma lepszej metody na rozchodzenie ostrego sosu przez silink diesla, 
niż jego dotarcie. Posiłkując się Czasoprzestrzennym Internetem Janusz wreszcie znalazł odpowiednią metodę pomiaru poziomu dotarcia silnika. Na forum motoryzacyjnym mirkowo.com odczytał, 
że należy zbadać dźwięki wydawane przez silnik, a dokładniej ich częstotliwość oraz długość fali. Te dwie wielkości łaczy relacja v = lf, gdzie v to prędkość dźwięku, l długość fali, 
natomiast f częstotliwość. Na forum tym znalazł on również cenne wskazówki.

Po pierwsze: dźwięki należy mierzyć na słuch, ponieważ te badziewne mierniki z Zeta Reticuli, 
które zalały rynek w calutkiej Drodze Mlecznej mierzą częstotliwość w zakresie od 500 do 5000 Hz, 
podczas gdy ludzkie ucho wychwytuje dźwięki z zakresu od 20 do 20 000 Hz!

Po drugie: silniki wehikułów działają tylko wtedy, gdy temperatura na zewnątrz wynosi od -30 do 30 stopni Celsjusza, 
dlatego pomiaru dźwięku należy dokonywać zarówno w lato, jak i zimę, gdyż prędkość dźwięku jest zależna od temperatury: 

![obraz](https://github.com/user-attachments/assets/d2a88dcd-352e-4275-9237-1af82013bdc7)

Po trzecie: gdy wszystkie prawidłowo zanotowane częstotliwości, bez względu na aurę, będą oscylować w granicach (300 +/- 25)Hz silnik można uznać za dotarty 
(musi istnieć co najmniej jeden prawidłowy odczyt z tego zakresu). Jeżeli zostanie odnotowany choćby jeden prawidłowo zanotowany dźwięk spoza tej skali, to silnik uznajemy za niedotarty.

Po czwarte: jeżeli silnik jest dotarty, to można wyruszyć bez problemu na koncert gwiazdora!!!

W celu dotarcia silnika załoga Kronostatu udawała się w losowe punkty na osi czasu, 
tak by dokonać pomiarów w różnych warunkach temperaturowych. W dawnych latach zimy były porządne, natomiast w przyszłości, 
przez ekstremalne ocieplenie klimatu, upał panuje cały rok. Mierzone metodą na "słuch Janusza" parametry pracy silika Stach zapisywał w notesie pokładowym. 
Na podstawie danych o długości fal dźwiękowych i częstotliwościach zasłyszanych w różnych miejscach w czasie nasz spec od wszystkiego oceni, czy wehikuł działa już prawidłowo.

Grażyna, patrząc z poirytowaniem na notaki, jakie robi Stach, złapała się za głowę, gdyż nie było w nich żadnego porządku. 

W celu uratowania misji sama chwyciła za notes i zaprowadziła porządek w zapiskach. Uporządkowała one dane z "Januszometru" poprzez zapisanie odwiedzanych lat w postaci drzewa binarnego. 
Dla danego roku zasłyszane częstotliwości i odpowiadające im długości fali Grażyna zapisała w analogiczny sposób.

Napisz program, który ułatwi pracę Grażyny.

Wejście
W pierwszej linii wejścia znajduje się liczba naturalna n - ilość podróży w czasie. Następnie ze standardowego wejścia pobrane zostanie n linii , 
składających się z trzech liczb naturalnych: y - rok, do którego przybyła załoga oraz f - zasłyszana częstotliwość w Hz oraz l - zmierzona długość fali w cm.

1 ≤ n ≤ 300 000
1 ≤ y ≤ 10 000
1 ≤ f ≤ 100 000
1 ≤ l ≤ 5 000

Wyjście
Na wyjściu powinniśmy otrzymać tyle linii, ile unikatowych dat pojawiło się w danych wejściowych, 
dla których dokonano prawidłowych pomiarów. Daty te powinny zostać posortowane rosnąco. Każda linia powinna zawierać zasłyszane w danym roku częstotliwości i długości fal:
[rok]: (f1,l1), (f2,l2), (f3,l3)...
Posortuj pary (fi,li) w porządku rosnącej częstotliwości. Jeżeli znajdą się dwie pary o jednakowej częstotliwości, to jako pierwszą wyświetl tę parę, która ma mniejszą długość fali.
W ostatniej linii wyjścia umieść dodatkową informację o tym czy silnik został dotarty TAK/NIE. Biorąc pod uwagę, że słuch Janusza po zjedzeniu ostrej pity, potrafi czasem szwankować, 
a zmęczona Grażyna sporadycznie popełnia błędy w notatkach (np. zapisze przy częstotliwości o jedno zero więcej niż trzeba) odrzuć wszystkie pomiary, które uznasz za błędne. 
Zastanów się jakich dźwięków Janusz nie mógł usłyszeć i jakie dźwięki nie mogły zostać zanotowane uwzględniając temperaturę.

UWAGA! W zadaniu nie można używać bibliotek STL. Należy wykorzystać samodzielnie napisaną implementację drzewa binarnego.
Przykład:

Wejście:
16
5029 10 2789
7819 45043 23
1993 30 1080
2789 29 1090
2222 302 107
834 299 108
67 34 100
123 390 12888
728 300 108
1073 302 107
2222 302 107
834 109 300
1993 300 108
234 3000 11
2222 150 214
834 299 109
	
Wyjście:
234: (3000,11)
728: (300,108)
834: (109,300) (299,108) (299,109)
1073: (302,107)
1993: (30,1080) (300,108)
2222: (150,214) (302,107) (302,107)
2789: (29,1090)
NIE

*/

#include <iostream>

struct Measurement_Node
{
    int how_much_times_does_measurement_occured = 1;
    int l;
    int f;

    Measurement_Node *left;
    Measurement_Node *right;

    void show_measurement()
    {
        for (int i = 0; i < how_much_times_does_measurement_occured; i++)
        {
            std::cout << "(" << f << "," << l << ")";
            if (i < how_much_times_does_measurement_occured - 1)
            {
                std::cout << " ";
            }
        }
    }

    void add(int new_f, int new_l)
    {
        if (new_f < f)
        {
            if (left == nullptr)
            {
                left = new Measurement_Node();
                left->f = new_f;
                left->l = new_l;
                // std::cout << "nowy lewy measurement " << new_f << " " << new_l << "\n";
                // std::cout << std::flush;
            }
            else
            {
                left->add(new_f, new_l);
                // std::cout << "delegacja do lewego m " << new_f << " " << new_l << "\n";
                // std::cout << std::flush;
            }
        }
        else if (new_f > f)
        {
            if (right == nullptr)
            {
                right = new Measurement_Node();
                right->f = new_f;
                right->l = new_l;
                // std::cout << "nowy prawy measurement " << new_f << " " << new_l << "\n";
                // std::cout<<"wartosc f: "<<f<<"  wartosc l:"<<l<<"\n";
                // std::cout << std::flush;
            }
            else
            {
                right->add(new_f, new_l);
                // std::cout << "delegacja do prawego m " << new_f << " " << new_l << "\n";
                // std::cout << std::flush;
            }
        }
        else
        {
            if (new_l < l)
            {
                if (left == nullptr)
                {
                    left = new Measurement_Node();
                    left->f = new_f;
                    left->l = new_l;
                    // std::cout << "nowy lewy measurement długość fali " << new_f << " " << new_l << "\n";
                    // std::cout << std::flush;
                }
                else
                {
                    left->add(new_f, new_l);
                    // std::cout << "delegacja do lewego measurement długość fali " << new_f << " " << new_l << "\n";
                    // std::cout << std::flush;
                }
            }
            else if (new_l > l)
            {

                if (right == nullptr)
                {
                    right = new Measurement_Node();
                    right->f = new_f;
                    right->l = new_l;
                    // std::cout << "nowy prawy measurement długość fali " << new_f << " " << new_l << "\n";
                    // std::cout << std::flush;
                }
                else
                {
                    right->add(new_f, new_l);
                    // std::cout << "delegacja prawego measurement długość fali " << new_f << " " << new_l << "\n";
                    // std::cout << std::flush;
                }
            }
            else
            {
                how_much_times_does_measurement_occured++;
                // std::cout << "równy\n";
                // std::cout << std::flush;
            }
        }
    }
};

struct Node
{
    int year;
    Measurement_Node *measurement_root;

    Node *left = nullptr;
    Node *right = nullptr;

    int get_year()
    {
        return year;
    }

    void add(int new_f, int new_l, int new_year)
    {
        if (new_year < year)
        {
            if (left == nullptr)
            {
                left = new Node();
                left->measurement_root = new Measurement_Node();
                left->measurement_root->f = new_f;
                left->measurement_root->l = new_l;
                left->year = new_year;
                // std::cout << "nowy lewy rok " << new_year << "\n";
                // std::cout << std::flush;
            }
            else
            {
                left->add(new_f, new_l, new_year);
                // std::cout << "delegacja lewy rok " << new_year << "\n";
                // std::cout << std::flush;
            }
        }
        else if (new_year > year)
        {
            if (right == nullptr)
            {
                right = new Node();
                right->measurement_root = new Measurement_Node();
                right->measurement_root->f = new_f;
                right->measurement_root->l = new_l;
                right->year = new_year;
                // std::cout << "nowy right rok " << new_year << "\n";
                // std::cout << std::flush;
            }
            else
            {
                right->add(new_f, new_l, new_year);
                // std::cout << "delegacja right rok " << new_year << "\n";
                // std::cout << std::flush;
            }
        }
        else
        {
            measurement_root->add(new_f, new_l);
            // std::cout << "ten sam rok " << new_year << "\n";
            // std::cout << std::flush;
        }
    }
};

void show_measurement_tree(Measurement_Node *measurement)
{
    if (measurement != nullptr)
    {
        show_measurement_tree(measurement->left);
        measurement->show_measurement();
        std::cout << " ";
        show_measurement_tree(measurement->right);
    }
}

void show_tree(Node *node)
{
    if (node != nullptr)
    {
        show_tree(node->left);
        std::cout << node->get_year() << ": ";
        show_measurement_tree(node->measurement_root);
        std::cout << "\n";
        show_tree(node->right);
    }
}

int main()
{
    int number_of_trips;
    int year; 
    int f;    
    int l;    
    bool is_dotarty = true;
    std::cin >> number_of_trips;

    Node *root = nullptr;

    for (int i = 0; i < number_of_trips; i++)
    {
        std::cin >> year >> f >> l;

        if (f > 20 && f < 20000)
        {
            int v = l * f;
            if (v >= 31300 && v <= 35000)
            {

                if (root == nullptr)
                {
                    Measurement_Node *measurement = new Measurement_Node();
                    measurement->f = f;
                    measurement->l = l;


                    root = new Node();
                    root->measurement_root = measurement;
                    root->year = year;
                }
                else
                {
                    root->add(f, l, year);

                }

                if (f < 275 || f > 325)
                {
                    is_dotarty = false;
                }
            }
        }
    }
    show_tree(root);

    if (root == nullptr)
    {
        is_dotarty = false;
    }
    if (is_dotarty)
    {
        std::cout << "TAK";
    }
    else
    {
        std::cout << "NIE";
    }

    delete[] root;

    return 0;
}