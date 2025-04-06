#include <iostream>
#include <string>

struct Artifact
{
    std::string name_of_artifact;
    int weight;
};

void insertion_sort(Artifact *artifacts, unsigned int number_of_artifacts)
{
    Artifact tmp;
    for (int i = 1; i < number_of_artifacts; i++)
    {
        tmp = artifacts[i];
        int j = i - 1;

        while (j >= 0 && artifacts[j].weight > tmp.weight)
        {
            artifacts[j + 1] = artifacts[j];
            j = j - 1;
        }
        
        artifacts[j + 1] = tmp;
    }
}

unsigned long int sum(Artifact *artifacts, unsigned int number_of_artifacts)
{
    unsigned long int sum=0;
    unsigned long int arr_with_sums[number_of_artifacts];


    for (int i = 0; i < number_of_artifacts; i++)
    {
        sum += artifacts[i].weight;
        arr_with_sums[i] = sum;
    }

    sum = 0;
    for (int i = 0; i < number_of_artifacts; i++)
    {
        sum += arr_with_sums[i];
    }

    return sum;
}

int main()
{
    unsigned int t; // liczba zestawow

    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        unsigned int number_of_artifacts;
        std::cin >> number_of_artifacts;

        Artifact *artifacts = new Artifact[number_of_artifacts];

        for (int j = 0; j < number_of_artifacts; j++)
        {
            std::cin >> artifacts[j].name_of_artifact >> artifacts[j].weight;
        }
        insertion_sort(artifacts, number_of_artifacts);

        std::cout << sum(artifacts, number_of_artifacts) << "\n";
        for (int j = 0; j < number_of_artifacts; j++)
        {
            std::cout << artifacts[j].name_of_artifact << " ";
        }

        delete[] artifacts;
    }

    return 0;
}