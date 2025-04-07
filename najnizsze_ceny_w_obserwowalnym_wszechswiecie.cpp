/*
Dzięki drobiazgowemu planowaniu Grażyny Sejf Paradoksu zużył o połowę mniej energii niż w ubiegłym miesiącu, 
gdy za deponowanie przedmiotów brał się Janusz. Przez to udało się uniknąć wysokich rachunków za energię od PGE (Ponadgalaktyczna Grupa Energetyczna).

Nasza załoga nie mogła jednak długo cieszyć się z zaoszczędzonych środków. Janusz wymieniając uszczelkę pod głowicą silnika w wehikule czasu uszkodził chłodnicę wypełnioną ciekłym azotem (zgodnie z prawem Murphy'ego 

"Jeśli coś może pójść nie tak, to pójdzie nie tak"). Zamiast spędzić miło czas, oglądając swój ulubiony sport- prasowanie ekstremalne, musiał on wybrać się do jednego z pobliskich sklepów sieci "Reptylianka". 
W sklepie tym można dostać praktycznie wszystko: od polędwiczek z czerwi pustynnych, aż po części wymienne do wehikułów z silnikiem diesla. Jedyną wadą tego dyskontu są kolejki, których długość liczy się w latach świetlnych. 

Wszystko przez to, że właściciel sklepu zatrudnił w zeszłym miesiącu do pracy na kasie szarych kosmitów, którzy mając tylko trzy palce nie są w stanie skanować tylu produktów, co mające po kilkanaście par odnóży insektoidy z konkurencyjnych sieci. 
Widząc skalę problemu Janusz udał się do managera sklepu i zaproponował, że za odpowiednio dużą zniżkę przy zakupach pomoże mu skrócić czas oczekiwania klientów poprzez opracowanie systemu do automatycznego zarządzania kolejkami.

Zadaniem programu będzie kierowanie klientów do najmniej obleganych kas. 
Program ma symulować pracę sklepu przez określony czas liczony w sekundach oraz wyświetlać stan każdej kasy 
(ilość osób w kolejce oraz szacowany czas oczekiwania w kolejce) po upływie tego czasu.

Te same kasy mogą w trakcie trwania symulacji być otwierane i zamykane kilkukrotnie. W przypadku otwarcia kasy czas oczekiwania i ilość osób w kolejce wynosi 0. 
Kasy, w których czas oczekiwania w kolejce (nie liczba osób - ponieważ może być tak, 
że jedna osoba zrobiła zakupy na cały rok i czas obsłużenia takiej osoby jest wyższy niż 10 standardowych klientów) jest najkrótszy powinny być przez system wychwytywane, 
a nowe osoby powinny być do takich kas kierowane. Nie rozpatrujemy sytuacji znanych z supermarketów, gdzie informacja o kasie, która będzie otwarta niebawem, podawana jest przez megafon i klienci mogą tworzyć kolejki do jeszcze nie otwartej kasy. 

Dodatkowo zakładamy, iż sekwencyjne zamykanie i otwieranie tej samej kasy w sklepie nie występuje. 
W naszym programie, gdy kasa ma zostać zamknięta kasjer obsługuje tylko pierwszą osobę z kolejki (dla uproszczenia przyjmujemy, że taka osoba zostaje obsłużona natychmiastowo,
wszakże kosmici mają możliwość zaginania czasoprzestrzeni). Pozostałe osoby, zaczynając od drugiej osoby, 
należy pokierować do pozostałych kas w ten sam sposób jak opisano to dla nowych klientów.

Zakładamy, że w sklepie musi w każdym momencie istnieć co najmniej jedna otwarta kasa. 
W przypadku, gdy dwie kasy mają jednakowy czas oczekiwania - system wybiera kasę o mniejszym numerze (id).

Wejście
W pierwszej linii wejścia znajdują się cztery liczby naturalne: t - czas pracy sklepu podlegający symulacji liczony w sekundach; 
l - ilość kas w sklepie; 
s - sprawność kas, czyli liczba sekund potrzebna na zeskanowanie produktu przez kasjera; 
z - czas, jaki potrzebuje klient na dokonanie płatności. 

W kolejnych liniach pojawiać będą się liczby/symbole opisujące zdarzenia, których wyróżniamy 3 rodzaje: 
o - otwarcie kasy, 
z - zamknięcie kasy, 
k - pojawienie się nowego klienta oczekującego na obsługę. 

Każda linia zaczyna się od jednoznakowej flagi: f - oznaczającej rodzaj zdarzenia (o,z,k - jak opisano wcześniej).
W przypadku, gdy f == 'k' kolejne dwa parametry to: 
p - względny czas w sekundach liczony od rozpoczęcia symulacji w przypadku pierwszego klienta, a dla pozostałych klientów- czas od pojawienia się poprzedniego klienta 
(jest gwarancja, że suma wszystkich względnych czasów w danych wejściowych pi będzie większa lub równa t) ; 
r - liczba produktów w koszyku klienta. 
Gdy f == 'o' lub f == 'z' kolejnym parametrem znajdującym się za flagą jest a - numer kasy.

Wyjście
Na wyjściu powinniśmy otrzymać stan każdej kasy po upływie czasu t zapisany w postaci:
K[numer_kasy]: [ilosc_osob_w_kolejce]o, [dlugosc_kolejki_w_sekundach]s - jeżeli kasa jest otwarta lub
K[numer_kasy]: z - gdy kasa jest zamknięta.

Informacje o kasach powinny być wyświetlone w jednej linii i powinny być oddzielone przecinkami.

UWAGA! W zadaniu nie można używać bibliotek STL. Należy wykorzystać samodzielnie napisaną implementację kolejki.
Przykład:

Wejście:
30 5 5 5			
o 2				
o 1				
k 0 8			
k 1 7			
k 1 10		
k 0 5			
k 0 4			
o 4				
k 10 8		
k 0 5			
k 10 6		
z 1				
k 7 7			
k 0 5	
k 8 4
	

Wyjście:
K0: z, K1: z, K2: 4o 136s, K3: z, K4: 5o 147s
*/

#include <iostream>

struct Alien
{
    int time_which_passed_since_previous_alien;
    int time;
    Alien *next_customer;
    Alien *previous_customer;
};

class Queue
{
    int sum_of_times = 0;
    bool is_open = false;
    Alien *head = nullptr;
    Alien *tail = nullptr;

public:
    short count_of_alien_in_queue()
    {
        Alien *tmp = head;
        short counter = 0;

        while (tmp != nullptr)
        {
            counter++;
            tmp = tmp->next_customer;
        }
        return counter;
    }

    void add(Alien *new_client)
    {
        sum_of_times += new_client->time;

        if (tail != nullptr)
        {
            tail->next_customer = new_client;
            new_client->previous_customer = tail;
            tail = new_client;
        }
        else
        {
            head = new_client;
            tail = head;
        }
    }

    Alien *pop()
    {
        Alien *tmp = head;
        if (head != nullptr)
        {
            sum_of_times = sum_of_times - head->time;

            head = head->next_customer;
        }
        if (tmp != nullptr)
        {
            tmp->next_customer = nullptr;
            tmp->previous_customer = nullptr;
        }
        if (head==nullptr){
            tail=nullptr;
        }
        return tmp;
    }

    bool isempty()
    {
        if (head == nullptr)
        {
            return true;
        }
        return false;
    }

    void open_cash()
    {
        is_open = true;
    }

    bool is_open_cash()
    {
        return is_open;
    }

    void close_cash()
    {
        is_open = false;
    }

    int get_sum_of_times()
    {
        return sum_of_times;
    }

    void how_much_time_left(int time_since_previous_alien_appeared)
    {
        Alien *tmp = head;

        bool took_away_time = false;
        while ((tmp != nullptr) && (time_since_previous_alien_appeared > 0))
        {

            if (tmp->time > time_since_previous_alien_appeared)
            {
                tmp->time = tmp->time - time_since_previous_alien_appeared;
                break;
            }
            else
            {
                time_since_previous_alien_appeared = time_since_previous_alien_appeared - tmp->time;
                pop();
                tmp=head;
            }
        }

        if ((sum_of_times-time_since_previous_alien_appeared) >= 0)
        {
            sum_of_times = sum_of_times - time_since_previous_alien_appeared;
        } else{
            sum_of_times=0;
        }
    }

    Alien *get_head()
    {
        return head;
    }
};

void add_alien_to_queue(int number_of_cash, Queue *queues, int time_since_previous_alien_appeared, Alien *alien, bool add_alien)
{
    int smallest_sum_of_cash = -1;
    int index_of_smallest_cash = -1;

    for (int i = 0; i < number_of_cash; i++)
    {
        if ((queues[i].is_open_cash() == true) && !queues[i].isempty())
        {
            queues[i].how_much_time_left(time_since_previous_alien_appeared);
        }
    }

    for (int i = 0; i < number_of_cash; i++)
    {

        if (queues[i].is_open_cash() == false)
        {
            continue;
        }

        if ((index_of_smallest_cash == -1) && (queues[i].is_open_cash() == true))
        {
            index_of_smallest_cash = i;
            smallest_sum_of_cash = queues[i].get_sum_of_times();
            continue;
        }

        if ((queues[i].is_open_cash() == true) && (queues[i].get_sum_of_times() < smallest_sum_of_cash)) 
        {
            index_of_smallest_cash = i;
            smallest_sum_of_cash = queues[i].get_sum_of_times();
        }

        if ((queues[i].is_open_cash() == true) && (queues[i].get_sum_of_times() == smallest_sum_of_cash))
        {
            if (index_of_smallest_cash <= i)
            {
                smallest_sum_of_cash = queues[index_of_smallest_cash].get_sum_of_times();
            }
            else
            {
                index_of_smallest_cash = i;
                smallest_sum_of_cash = queues[i].get_sum_of_times();
            }
        }
    }
    if (add_alien == true)
    {
        queues[index_of_smallest_cash].add(alien);

    }
}

void o(int number_of_cash, Queue *queues)
{
    int which_cash_becomes_open = 0;

    std::cin >> which_cash_becomes_open;

    for (int i = 0; i < number_of_cash; i++)
    {
        if (i == which_cash_becomes_open)
        {
            queues[i].open_cash();
        }
    }
}

void z(int number_of_cash, Queue *queues)
{
    int which_cash_becomes_closed = 0;

    std::cin >> which_cash_becomes_closed;

    Alien *tmp = queues[which_cash_becomes_closed].pop();

    if (tmp == nullptr)
    {
        return;
    }
    tmp = queues[which_cash_becomes_closed].pop();

    queues[which_cash_becomes_closed].close_cash();

    while (tmp != nullptr)
    {
        add_alien_to_queue(number_of_cash, queues, 0, tmp, true);
        tmp = queues[which_cash_becomes_closed].pop();
    }
}

void show_result(int number_of_cash, Queue *queues)
{
    for (int i = 0; i < number_of_cash; i++)
    {
        std::cout << "K" << i << ": ";
        if (queues[i].is_open_cash() == false)
        {
            std::cout << "z";
        }
        else
        {
            std::cout << queues[i].count_of_alien_in_queue() << "o " << queues[i].get_sum_of_times() << "s";
        }

        if (i != number_of_cash - 1)
        {
            std::cout << ", ";
        }
    }
}
int main()
{
    int time_to_close_shop;
    int number_of_cash;
    int product_scan_time;
    int payment_time;
    int actual_time = 0;

    std::cin >> time_to_close_shop >> number_of_cash >> product_scan_time >> payment_time;

    Queue *queues = new Queue[number_of_cash];

    while (time_to_close_shop > actual_time)
    {
        char flag;
        std::cin >> flag;

        if (flag == 'o')
        {
            o(number_of_cash, queues);
        }
        else if (flag == 'z')
        {
            z(number_of_cash, queues);
        }
        else if (flag == 'k')
        {
            int time_since_previous_alien_appeared = 0;
            int number_of_products = 0;
            int customer_time_needed_to_appeared = 0;
            bool add_alien = true;

            std::cin >> time_since_previous_alien_appeared >> number_of_products;
            customer_time_needed_to_appeared = number_of_products * product_scan_time + payment_time;

            Alien *alien = new Alien();

            alien->time = customer_time_needed_to_appeared;
            
            alien->time_which_passed_since_previous_alien = time_since_previous_alien_appeared;
            if ((actual_time + time_since_previous_alien_appeared) > time_to_close_shop)
            {
                time_since_previous_alien_appeared = time_to_close_shop - actual_time;
                add_alien = false;
            }

            actual_time = actual_time + time_since_previous_alien_appeared;
            add_alien_to_queue(number_of_cash, queues, time_since_previous_alien_appeared, alien, add_alien);
        }
    }
    show_result(number_of_cash, queues);

    return 0;
}