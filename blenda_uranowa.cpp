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