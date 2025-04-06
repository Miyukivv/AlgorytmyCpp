#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <stack>

bool bfs_cycle_detection(int startNode, const std::vector<std::vector<int>> &neighbourhood_list)
{
    int amountOfNodes = neighbourhood_list.size();
    std::vector<int> inDegree(amountOfNodes, 0);

    for (std::vector<int> neighbours : neighbourhood_list)
    {

        for (int neighbor : neighbours)
        {
            inDegree[neighbor]++;
        }
    }

    std::queue<int> zeroInDegreeQueue;
    for (int i = 0; i < amountOfNodes; i++)
    {
        if (inDegree[i] == 0)
        {
            zeroInDegreeQueue.push(i);
        }
    }

    int visitedNodes = 0;

    while (!zeroInDegreeQueue.empty())
    {
        int currentNode = zeroInDegreeQueue.front();
        zeroInDegreeQueue.pop();
        visitedNodes++;

        for (int neighbor : neighbourhood_list[currentNode])
        {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0)
            {
                zeroInDegreeQueue.push(neighbor);
            }
        }
    }

    return visitedNodes != amountOfNodes;
}

void reverseVector(std::vector<int> &vec)
{
    int left = 0;
    int right = vec.size() - 1;

    while (left < right)
    {
        std::swap(vec[left], vec[right]);
        left++;
        right--;
    }
}

void printVector(const std::vector<int> &vec)
{
    for (int v : vec)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;
}

bool yes_or_no(std::vector<int> path)
{
    return path.size() % 2 != 0;
}

int idx(int v, int p)
{
    return 2 * v + p;
}

int getV(int i)
{
    return i / 2;
}

int getP(int i)
{
    return i % 2;
}

std::vector<int> bfs_best_path(int startNode, const std::vector<std::vector<int>> &neighbourhood_list)
{
    int n = neighbourhood_list.size();

   
    std::vector<bool> visited(2 * n, false);
    std::vector<int> parent(2 * n, -1);

    int start = idx(startNode, 0);
    visited[start] = true;
    parent[start] = start;
    std::queue<std::pair<int, int>> bfsQueue;

    bfsQueue.push({startNode, 0});
    while (!bfsQueue.empty())
    {
        std::pair<int, int> front = bfsQueue.front();
        bfsQueue.pop();

        int v = front.first;
        int p = front.second;

        if (neighbourhood_list[v].empty() && p == 0)
        {
            std::vector<int> path;

            int state = idx(v, p);

            while (parent[state] != state)
            {
                path.push_back(getV(state));
                state = parent[state];
            }

            path.push_back(getV(state));
            std::reverse(path.begin(), path.end());
            return path;
        }

        int newP = 1 - p;
        for (int next : neighbourhood_list[v])
        {
            int nextIdx = idx(next, newP);

            if (!visited[nextIdx])
            {
                visited[nextIdx] = true;

                parent[nextIdx] = idx(v, p);
                bfsQueue.push({next, newP});
            }
        }
    }
    return {};
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    int number_of_sets;
    std::cin >> number_of_sets;

    for (int i = 0; i < number_of_sets; i++)
    {
        int number_of_points, number_of_connections, repair_starts_from_this_point;
        std::cin >> number_of_points >> number_of_connections >> repair_starts_from_this_point;

        std::vector<std::vector<int>> neighbourhood_list(number_of_points);

        for (int j = 0; j < number_of_connections; j++)
        {
            int decision_at_this_point, leds_to_this_point;
            std::cin >> decision_at_this_point >> leds_to_this_point;
            neighbourhood_list[decision_at_this_point].push_back(leds_to_this_point);
        }

        for (int j = 0; j < number_of_points; j++)
        {
            std::sort(neighbourhood_list[j].begin(), neighbourhood_list[j].end());
        }

        std::vector<int> path = bfs_best_path(repair_starts_from_this_point, neighbourhood_list);

        if (path.empty())
        {
            bool detected_cycle = bfs_cycle_detection(repair_starts_from_this_point, neighbourhood_list);
            if (detected_cycle)
            {
                std::cout << "PETLA\n";
            }
            else
            {
                std::cout << "NIE\n";
            }
        }
        else
        {
            std::cout << "TAK\n";
            printVector(path);
        }
    }
    return 0;
}