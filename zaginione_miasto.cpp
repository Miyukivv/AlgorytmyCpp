/*
Janusz, Grażyna i Stach wylądowali w ruinach starożytnego miasta zaginionego w czasie. 
Miasto to jest podzielone na sektory o wymiarach n×n, a w każdym z sektorów może znajdować się cenny artefakt lub nic wartościowego.
Podróżnicy nie mają czasu na to, żeby obejść wszystkie sektory, ale chcieliby pozbierać jak najwięcej artefaktów. Rozpoczynają eksplorację w północno-zachodnim rogu miasta. 

Przemieszczając się o jeden sektor w prawo lub na południe, docierają do południowo-wschodniego rogu. 
Następnie wracają, poruszając się na północ lub na zachód, aby dotrzeć do punktu startowego. 
Trasa powrotna może pokrywać się częściowo lub całkowicie z trasą w jedną stronę, jednak żaden artefakt nie może być zabrany dwukrotnie.
Wejście:

Na wejściu znajduje się liczba naturalna n – rozmiar miasta. Następnie w kolejnych n wierszach podane są po n wartości (0 lub 1), oznaczające brak lub obecność artefaktu w danym sektorze.
1<=n<=500

Wyjście:
Na wyjściu należy podać maksymalną liczbę artefaktów, które można zebrać, eksplorując miasto zgodnie z opisanymi zasadami.

UWAGA! W zadaniu należy wykorzystać programowanie dynamiczne.

Przykład:
Wejście:
4
1 0 1 0
1 1 0 0
0 0 0 1
1 0 0 1

Wyjście:
6
*/

#include <iostream>

int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    return y;
}

int min(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    return y;
}
int maxCoins(int **board, int n)
{
    int ***p = new int **[2];
    for (int i = 0; i < 2; i++)
    {
        p[i] = new int *[n];
        for (int j = 0; j < n; j++)
        {
            p[i][j] = new int[n];

            for (int k = 0; k < n; k++)
            {
                p[i][j][k] = -1;
            }
        }
    }
    p[0][0][0] = board[0][0];

    int max_steps = 2 * (n - 1) + 1;

    int number_of_coins = -1;
    for (int k = 1; k < max_steps; k++)
    {
        int actual = k % 2;
        int previous = 1 - actual;

        // Ustawienie pozycji Grażyny
        for (int x1 = std::max(0, k - (n - 1)); x1 <= std::min(n - 1, k); x1++)
        {
            // Ustawienie pozycji Janusza
            for (int x2 = std::max(0, k - (n - 1)); x2 <= std::min(n - 1, k); x2++)
            {
                int y1 = k - x1;
                int y2 = k - x2;

                // To nas ogranicza, żebyśmy nie wykroczyli poza schemat
                if (y1 >= n || y1 < 0 || y2 < 0 || y2 >= n)
                {
                    continue;
                }
                number_of_coins = -1;
                if (x1 > 0 && x2 > 0)
                {
                    number_of_coins = std::max(number_of_coins, p[previous][x1 - 1][x2 - 1]);
                }
                // Grażyna w prawo, Janusz w dół
                if (x2 > 0)
                {
                    number_of_coins = std::max(number_of_coins, p[previous][x1][x2 - 1]);
                }
                // Janusz w prawo, Grażyna w dół
                if (x1 > 0)
                {
                    number_of_coins = std::max(number_of_coins, p[previous][x1 - 1][x2]);
                }
                // Razem w prawo

                number_of_coins = std::max(number_of_coins, p[previous][x1][x2]);

                if (number_of_coins >= 0)
                {
                    p[actual][x1][x2] = number_of_coins + board[x1][y1];

                    // nie zbieramy tej samej monety
                    if (x1 != x2 || y1 != y2)
                    {
                        p[actual][x1][x2] += board[x2][y2];
                    }
                }
            }
        }
    }
    return p[(max_steps - 1) % 2][n - 1][n - 1];
}

int main()
{
    int x, n;
    int counter = 0;

    std::cin >> n;
    int **board = new int *[n];

    for (int i = 0; i < n; i++)
    {
        board[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            std::cin >> board[i][j];
        }
    }
    std::cout << maxCoins(board, n);

    for (int i = 0; i < n; i++)
    {
        delete board[i];
    }
    delete[] board;

    return 0;
}