#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> find_amount_of_prime_dividers_for_numbers(int N) {
    std::vector<bool> is_number_prime(N + 1, true);
    std::vector<int> number_of_prime_dividers(N + 1, 0);
    
    is_number_prime[0] = is_number_prime[1] = false;

    for (int i = 2; i <= N; ++i) {
        if (is_number_prime[i]) {
            for (int j = i; j <= N; j += i) {
                number_of_prime_dividers[j]++;
                is_number_prime[j] = false;
            }
        }
    }

    return number_of_prime_dividers;
}

int select_number(std::vector<int> matching_numbers, int k)
{
    std::vector<int> B;
    int size_C = 0;
    std::vector<int> D;

    int a = matching_numbers[matching_numbers.size()/2];
    for (int i = 0; i < matching_numbers.size(); i++)
    {
        if (matching_numbers[i] < a)
        {
            B.push_back(matching_numbers[i]);
        }
        else if (matching_numbers[i] == a)
        {
            size_C++;
        }
        else
        {
            D.push_back(matching_numbers[i]);
        }
    }

    int size_B = B.size();

    if (k < size_B)
    {
        return select_number( B, k);
    }
    else if (k >= size_B && k < (size_B + size_C))
    {
        return a;
    }
    else
    {
        return select_number(D, k - (size_B + size_C));
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    std::vector<int> number_of_prime_divider_for_numbers = find_amount_of_prime_dividers_for_numbers(1000000);
    for (int i = 0; i < t; i++)
    {
        std::vector<int> arr_with_numbers;
        int n;
        std::cin >> n;

        for (int i = 0; i < n; i++)
        {
            int number;
            std::cin >> number;
            arr_with_numbers.push_back(number);
        }

        int k;
        std::cin >> k;

        if (k >= arr_with_numbers.size())
        {
            std::cout << "BRAK DANYCH\n";
            continue;
        }
        
        std::vector<int> matching_numbers;
        for(int i = 0; i < arr_with_numbers.size(); i++) {
            if(number_of_prime_divider_for_numbers[arr_with_numbers[i]] % 2 == 0) {
                matching_numbers.push_back(arr_with_numbers[i]);
            }
        }

        if (k >= matching_numbers.size())
        {
            std::cout << "BRAK DANYCH\n";
            continue;
        }
        int result = select_number(matching_numbers, k);

        std::cout << result << "\n";
    }

    return 0;
}