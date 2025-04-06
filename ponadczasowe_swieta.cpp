#include <iostream>

struct Bucket
{
    float min;
    float max;
    bool empty = true;
};

void print_positions(int n, float *positions)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << positions[i] << " ";
    }
    std::cout << "\n";
}

float the_longest_distance(Bucket *buckets, int n)
{
    float the_longest_distance = 0.0;
    float prev_max = buckets[0].max;

    for (int i = 0; i < n; i++)
    {
        float distance;
        if (buckets[i].empty != true)
        {
            distance = buckets[i].min - prev_max;
            if (distance > the_longest_distance)
            {
                the_longest_distance = distance;
            }
            prev_max = buckets[i].max;
        }
    }
    return the_longest_distance;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;

    float *positions = new float[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> positions[i];
    }
    float min_position = positions[0];
    float max_position = positions[0];

    for (int i = 1; i < n; i++)
    {
        if (positions[i] < min_position)
        {
            min_position = positions[i];
        }
        if (positions[i] > max_position)
        {
            max_position = positions[i];
        }
    }

    float width_of_the_bucket = (max_position - min_position) / (n - 1);

    Bucket *buckets = new Bucket[n];

    for (int i = 0; i < n; i++)
    {
        buckets[i].min = max_position;
        buckets[i].max = min_position;
    }

    for (int i = 0; i < n; i++)
    {
        int index = (positions[i] - min_position) / width_of_the_bucket;
        if (index >= n)
        {
            index = n - 1;
        }

        if (buckets[index].empty == true)
        {
            buckets[index].empty = false;
            buckets[index].min = positions[i];
            buckets[index].max = positions[i];
        }
        else
        {
            if (positions[i] < buckets[index].min)
            {
                buckets[index].min = positions[i];
            }
            if (positions[i] > buckets[index].max)
            {
                buckets[index].max = positions[i];
            }
        }
    }
    std::printf("%.4f\n", the_longest_distance(buckets, n));

    delete[] buckets;
    delete[] positions;
    return 0;
}