/*
Janusz znowu coś sknocił. Po powrocie z interwencji podczas koronacji Bolesława Chrobrego linia czasu przestała być stabilna – Janusz zamiast subtelnie naprawić drobne zakłócenie, 
przypadkiem zainspirował Chrobrego do wynalezienia elektryczności na wieki przed Edisonem! Efekt? W 1025 roku rycerze walczą mieczami świetlnymi, a Mieszko II twierdzi, że widział UFO.
Stach, wieczny teoretyk czasowy, zaraz zaproponował genialne rozwiązanie: „Janusz, może spróbuj wrócić do tego momentu i zamiast wyrywać się z takimi pomysłami, tylko pomachaj flagą Chrobrego! 

Kto wie, może to wystarczy?” Grażyna, szefowa misji, kiwała głową, mrużąc oczy. „Janusz, decyzja należy do ciebie, 
ale pamiętaj – jeśli znowu coś sknocisz, wracasz na miesiąc do epoki lodowcowej, 
z dietą złożoną wyłącznie z rozmrożonej wody mamutów. Podobno niezbyt orzeźwiająca.”
Janusz musi przebrnąć przez serię decyzji, by na powrót ustabilizować linię czasu. W tej trudnej misji pomoże mu nieco przestarzały, 
ale wciąż funkcjonalny system MOWKiCz (Monitor Ostatecznego Wyrównania Krawędzi Czasu), który wrzuca Janusza w wybrany stabilny punkt czasu i wskazuje decyzje prowadzące do innych punktów. 

Janusz musi przemieszczać się między punktami w linii czasu i w każdym z nich podjąć decyzję, która prowadzi do następnego punktu. 
Każde przejście między punktami zmienia status docelowego punktu na przeciwny do statusu punktu, z którego Janusz przybył – stabilny zmienia się w niestabilny i odwrotnie. 
Celem jest osiągnięcie sytuacji, w której ostatni punkt w czasie – ten, z którego nie ma już przejścia dalej – zachowuje stabilność.
MOWKiCz nie jest idealny i bywa, że stabilizacja nie jest możliwa. W takim przypadku Janusz może spróbować wybrać mniejsze zło: ugrzęznąć w pętli czasowej, 
to znaczy będzie krążyć między punktami bez końca, zmieniając ich status. Grażyna nazywa to pętlą. Gorsza opcja to sytuacja, w której system nie daje już żadnych szans na stabilizację
co oznacza nieuniknioną katastrofę temporalną.

Czy Janusz może doprowadzić do stabilizacji systemu? Czasem sukces wydaje się niemożliwy, 
ale system pozwala na balansowanie na krawędzi chaosu. Jeśli jednak nie ma żadnej szansy na stabilność, 
pozostaje Januszowi czekać na najgorsze - tyradę Grażyny.

Wejście:
Na wejściu program otrzymuje liczbę naturalną t, oznaczającą liczbę testów. Następnie podanych jest t zestawów danych. 
Każdy zestaw składa się z trzech liczb naturalnych n, m oraz s oznaczających liczbę punktów, liczbę połączeń pomiędzy nimi i numer punktu, 
z którego rozpoczyna się naprawianie linii czasu.
W kolejnych m liniach występują pary liczb naturalnych x i y – które informują, że decyzja w punkcie czasu nr x prowadzi do punktu nr y. 
Należy przyjąć, że nie pojawią się wielokrotnie te same połączenia ani pętle (czyli połączenia które zaczynają się i kończą w tym samym punkcie).
Punkty numerowane są od 0.

Wyjście:

Na wyjściu dla każdego testu program ma wypisać informację NIE, jeżeli nie ma możliwości, 
by Janusz doprowadził do stabilizacji, PETLA, jeżeli nie da się uzyskać stabilizacji, ale można doprowadzić do pętli lub TAK, 
jeżeli Janusz może doprowadzić do stabilizacji. W przypadku sukcesu należy w drugiej linii wyjścia dla danego testu wypisać numery punktów, 
które kolejno należy odwiedzić. Należy podać najkrótsze rozwiązanie. W przypadku ścieżek równej długości należy wybrać pierwszą leksykograficznie.

Przykład:
Wejście:
3
6 7 3
0 1
1 5
2 0
2 1
3 2
3 4
4 0
4 3 0
0 1
1 2
2 3
2 2 0
0 1
1 0

Wyjście:
TAK
3 2 0 1 5
NIE
PETLA
*/

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