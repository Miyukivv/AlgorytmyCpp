/*
Janusz, Stach i Grażyna zostali wysłani do roku 1574, kiedy to odbywała się wielka uczta powitalna Henryka Walezego. 
Według danych Kronostatu podczas uczty doszło do kulinarnej katastrofy - królewski pałacowy ogród przypraw został źle zaplanowany, co spowodowało, 
że niektóre przyprawy rosły w trudno dostępnych miejscach, a zbiór był niezwykle kosztowny. Jednak według historycznych zapisów taka katastrofa nigdy nie miała miejsca. 
Kronostat zidentyfikował poważną anomalię czasową, która zakłóciła oryginalny projekt ogrodu, zmieniając jego układ w skomplikowany, chaotyczny labirynt przypraw. 

Podróżnicy dostali zatem zadanie przeprojektowania ogrodu tak,  aby koszt zbioru przypraw do królewskich potraw był jak najmniejszy.
Ogród przypraw jest podzielony na grządki ułożone w kwadratowej siatce z wytyczonymi ścieżkami pomiędzy nimi. 
Grządki są ponumerowane wzdłuż ścieżek poziomych (wierszy) i pionowych (kolumn) od 0 do n-1.

W każdej ścieżce poziomej (wierszu) i pionowej (kolumnie) można przypisać przyprawę tylko do jednej grządki. 

Oznacza to, że w danym wierszu może być wybrana dokładnie jedna grządka oraz w danej kolumnie również dokładnie jedna grządka. 
Jest tak, bo według obliczeń królewskiego astrologa, mistrza Horacjusza Ziółkowskiego przyprawy z jednej ścieżki nie mogą rosnąć na więcej niż jednej grządce. 
Inaczej grozi to zakwaszeniem atmosfery, nadmiarem mocy bazylii i samozapłonem oregano. Każda grządka ma przypisany koszt zbioru przypraw. Podczas przydziału grządek trzeba tylko pamiętać, 
że plan nasadzeń musiał być zgodny z królewskim dekretem, który nakazuje zaczynać sadzenie od najniższych numerów ścieżek tam, gdzie jest to możliwe.

Wejście
Na wejściu program otrzyma liczbę dodatnią 1<=n<=35, oznaczającą liczbę ścieżek i grządek w ogrodzie. 
W kolejnych n wierszach znajdzie się ciąg n liczb naturalnych, oznaczających koszt zbioru przyprawy z danej grządki. 
Koszt na poszczególnych grządkach nie przekracza 1000.
Wyjście

Na wyjściu program musi wypisać n liczb, gdzie każda z nich oznacza numer ścieżki, 
wzdłuż której należy posadzić przyprawę na danej grządce. Ścieżki i grządki są numerowane od 0.

UWAGA! W zadaniu nie można używać bibliotek STL. Zadanie należy zaimplementować wykorzystując metodę przeszukiwania z nawrotami.

Przykład
Wejście:
4
5 3 2 2
1 2 3 3
2 1 8 7
3 5 3 2

Wyjście:
1 2 0 3
*/

#include <iostream>

struct Path
{
    int sum;
    int *path;
};

void find_shortest_path(int column, int **arr, int n, Path &currentPath, Path &resultPath, bool *used)
{

    if (column == n)
    {
        if (currentPath.sum < resultPath.sum)
        {
            resultPath.sum = currentPath.sum;

            for (int i = 0; i < n; i++)
            {
                resultPath.path[i] = currentPath.path[i];
            }
        }
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (currentPath.sum >= resultPath.sum)
        {
            return;
        }
        if (used[i] != true)
        {
            used[i] = true;
            currentPath.path[column] = i;
            currentPath.sum = currentPath.sum+arr[i][column];

            find_shortest_path(column + 1, arr, n, currentPath, resultPath, used);
            currentPath.sum = currentPath.sum-arr[i][column];
            used[i] = false;
        }
    }
}

int main()
{
    int n;
    std::cin >> n;

    int **arr = new int *[n];
    bool *used = new bool[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        used[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    Path resultPath;
    Path currentPath;

    resultPath.path=new int[n];
    resultPath.sum=1000;

    currentPath.path=new int[n];
    currentPath.sum=0;

    find_shortest_path(0, arr, n, currentPath, resultPath, used);
    for (int i = 0; i < n; i++)
    {
        std::cout << resultPath.path[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    delete[] used;
    return 0;
}