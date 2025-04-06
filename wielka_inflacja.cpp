#include <iostream>
#include <vector>

class Heap_Ascending
{
    std::vector<int> arr_with_prices;
    int n;

public:
    Heap_Ascending(int number_of_operations)
    {
        arr_with_prices.resize(number_of_operations);
        n = 0;
    }

    int get_n()
    {
        return n;
    }

    void add_to_heap(int price)
    {
        arr_with_prices[n] = price;
        int current_index_of_added = n;
        int father_index;

        while (current_index_of_added != 0)
        {
            father_index = ((current_index_of_added - 1) / 2);
            if (arr_with_prices[father_index] < arr_with_prices[current_index_of_added])
            {
                break;
            }
            int tmp = arr_with_prices[current_index_of_added];
            arr_with_prices[current_index_of_added] = arr_with_prices[father_index];
            arr_with_prices[father_index] = tmp;
            current_index_of_added = father_index;
        }
        n++;
    }

    int pop()
    {
        if (n == 0)
        {
            return 0;
        }
        int value_of_greatest = arr_with_prices[0];
        arr_with_prices[0] = arr_with_prices[n - 1];
        n--;

        int current_index_of_value = 0;
        int left_son_index = 1;
        int right_son_index = 2;
        while (left_son_index < n)
        {
            if (right_son_index < n)
            {
                if (arr_with_prices[left_son_index] < arr_with_prices[right_son_index])
                {
                    if (arr_with_prices[left_son_index] < arr_with_prices[current_index_of_value])
                    {
                        int tmp = arr_with_prices[current_index_of_value];
                        arr_with_prices[current_index_of_value] = arr_with_prices[left_son_index];
                        arr_with_prices[left_son_index] = tmp;
                        current_index_of_value = left_son_index;
                    }
                    else
                    {
                        break;
                    }
                }
                else if (arr_with_prices[right_son_index] < arr_with_prices[current_index_of_value])
                {
                    int tmp = arr_with_prices[current_index_of_value];
                    arr_with_prices[current_index_of_value] = arr_with_prices[right_son_index];
                    arr_with_prices[right_son_index] = tmp;
                    current_index_of_value = right_son_index;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (arr_with_prices[left_son_index] < arr_with_prices[current_index_of_value])
                {
                    int tmp = arr_with_prices[current_index_of_value];
                    arr_with_prices[current_index_of_value] = arr_with_prices[left_son_index];
                    arr_with_prices[left_son_index] = tmp;
                    current_index_of_value = left_son_index;
                }
                else
                {
                    break;
                }
            }

            left_son_index = current_index_of_value * 2 + 1;
            right_son_index = current_index_of_value * 2 + 2;
        }
        return value_of_greatest;
    }

    void show_heap_arr()
    {
        std::cout << "show: \n";
        for (int i = 0; i < n; i++)
        {
            std::cout << arr_with_prices[i] << ", ";
        }
        std::cout << "\n";
    }

    void show_pop_all()
    {
        int tmp = n;
        std::cout << "pop: \n";
        for (int i = 0; i < tmp; i++)
        {
            std::cout << pop() << " ";
        }
        std::cout << "\n";
    }
};

class Heap_Descending
{
    std::vector<int> arr_with_prices;
    int n;

public:
    Heap_Descending(int number_of_operations)
    {
        arr_with_prices.resize(number_of_operations);
        n = 0;
    }

    int get_n()
    {
        return n;
    }

    void add_to_heap(int price)
    {
        arr_with_prices[n] = price;
        int current_index_of_added = n;
        int father_index;

        while (current_index_of_added != 0)
        {
            father_index = ((current_index_of_added - 1) / 2);
            if (arr_with_prices[father_index] > arr_with_prices[current_index_of_added])
            {
                break;
            }
            int tmp = arr_with_prices[current_index_of_added];
            arr_with_prices[current_index_of_added] = arr_with_prices[father_index];
            arr_with_prices[father_index] = tmp;
            current_index_of_added = father_index;
        }
        n++;
    }

    int pop()
    {
        if (n == 0)
        {
            return 0;
        }
        int value_of_greatest = arr_with_prices[0];
        arr_with_prices[0] = arr_with_prices[n - 1];
        n--;
        traverse_tree_after_modify_or_adding();
        return value_of_greatest;
    }

    void modify_value_of_greatest(int value)
    {
        if(arr_with_prices[0] + value < 0) {
            return;
        }
        arr_with_prices[0] += value;
        traverse_tree_after_modify_or_adding();
    }

    void traverse_tree_after_modify_or_adding()
    {
        int current_index_of_value = 0;
        int left_son_index = 1;
        int right_son_index = 2;
        while (left_son_index < n)
        {
            if (right_son_index < n)
            {
                if (arr_with_prices[left_son_index] > arr_with_prices[right_son_index])
                {
                    if (arr_with_prices[left_son_index] > arr_with_prices[current_index_of_value])
                    {
                        int tmp = arr_with_prices[current_index_of_value];
                        arr_with_prices[current_index_of_value] = arr_with_prices[left_son_index];
                        arr_with_prices[left_son_index] = tmp;
                        current_index_of_value = left_son_index;
                    }
                    else
                    {
                        break;
                    }
                }
                else if (arr_with_prices[right_son_index] > arr_with_prices[current_index_of_value])
                {
                    int tmp = arr_with_prices[current_index_of_value];
                    arr_with_prices[current_index_of_value] = arr_with_prices[right_son_index];
                    arr_with_prices[right_son_index] = tmp;
                    current_index_of_value = right_son_index;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (arr_with_prices[left_son_index] > arr_with_prices[current_index_of_value])
                {
                    int tmp = arr_with_prices[current_index_of_value];
                    arr_with_prices[current_index_of_value] = arr_with_prices[left_son_index];
                    arr_with_prices[left_son_index] = tmp;
                    current_index_of_value = left_son_index;
                }
                else
                {
                    break;
                }
            }
            left_son_index = current_index_of_value * 2 + 1;
            right_son_index = current_index_of_value * 2 + 2;
        }
    }

    void show_heap_arr()
    {
        std::cout << "show: \n";
        for (int i = 0; i < n; i++)
        {
            std::cout << arr_with_prices[i] << ", ";
        }
        std::cout << "\n";
    }

    void show_pop_all()
    {
        int tmp = n;
        std::cout << "pop: \n";
        for (int i = 0; i < tmp; i++)
        {
            std::cout << pop() << " ";
        }
        std::cout << "\n";
    }
};

long long sum(Heap_Ascending heap_percents, Heap_Descending heap_prices)
{
    long long sum = 0;
    int n = heap_percents.get_n();
    for (int i = 0; i < n; i++)
    {
        sum += heap_prices.pop() * heap_percents.pop();
    }
    return sum;
}

int main()
{
    int number_of_entrepreneurs;
    std::cin >> number_of_entrepreneurs;
    for (int i = 0; i < number_of_entrepreneurs; i++)
    {
        int number_of_operations;
        std::cin >> number_of_operations;
        Heap_Descending heap_for_prices(number_of_operations);
        Heap_Ascending heap_for_percents(number_of_operations);

        for (int j = 0; j < number_of_operations; j++)
        {
            char type_of_operations;
            std::cin >> type_of_operations;
            if (type_of_operations == 'a')
            {
                int add_price, percent;
                std::cin >> add_price;
                std::cin >> percent;
                heap_for_prices.add_to_heap(add_price);
                heap_for_percents.add_to_heap(percent);
            }
            else if (type_of_operations == 'p')
            {
                int price_modifier;
                std::cin >> price_modifier;
                heap_for_prices.modify_value_of_greatest(price_modifier);
            }
        }
        std::cout << sum(heap_for_percents, heap_for_prices) << "\n";
    }
    return 0;
}