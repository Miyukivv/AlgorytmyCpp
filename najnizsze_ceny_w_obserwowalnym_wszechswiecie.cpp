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