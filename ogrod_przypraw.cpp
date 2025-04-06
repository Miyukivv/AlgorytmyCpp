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