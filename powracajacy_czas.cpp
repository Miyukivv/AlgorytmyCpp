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