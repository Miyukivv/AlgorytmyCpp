#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

struct Coordinates_of_rectangle
{
    int right_x;
    int right_y;
    int left_x;
    int left_y;
};

struct Allotment
{
    Coordinates_of_rectangle coordinates_of_allotment;
    std::vector<Coordinates_of_rectangle> all_buildings;

    void calculate_coordinates_of_allotment()
    {
        int max_x = 0, max_y = 0, min_x = -1, min_y = -1;

        for (Coordinates_of_rectangle building : all_buildings)
        {
            if (building.right_x > max_x)
            {
                max_x = building.right_x;
            }

            if (building.right_y > max_y)
            {
                max_y = building.right_y;
            }
            if (min_x == -1 || (building.left_x < min_x))
            {
                min_x = building.left_x;
            }
            if (min_y == -1 || (building.left_y < min_y))
            {
                min_y = building.left_y;
            }
        }

        coordinates_of_allotment.right_x = max_x;
        coordinates_of_allotment.right_y = max_y;
        coordinates_of_allotment.left_x = min_x;
        coordinates_of_allotment.left_y = min_y;
    }

};

// metoda ktora sprawdza czy linia przecina budynek
bool does_line_cut_the_building_by_x(std::vector<Coordinates_of_rectangle> &coordinates_of_buildings, int x)
{
    for (Coordinates_of_rectangle building : coordinates_of_buildings)
    {
        if (building.left_x < x && building.right_x > x)
        {
            return true;
        }
    }
    return false;
}

bool does_line_cut_the_building_by_y(std::vector<Coordinates_of_rectangle> &coordinates_of_buildings, int y)
{
    for (Coordinates_of_rectangle building : coordinates_of_buildings)
    {
        if (building.left_y < y && building.right_y > y)
        {
            return true;
        }
    }
    return false;
}

std::vector<Allotment> divide_allotments_x(Allotment &allotment, int x)
{
    Allotment allotment1; 
    Allotment allotment2; 
    for (Coordinates_of_rectangle building : allotment.all_buildings)
    {
        if (building.left_x <= x && building.right_x <= x)
        {
            allotment1.all_buildings.push_back(building);
        }
        else
        {
            allotment2.all_buildings.push_back(building);
        }
    }
    std::vector<Allotment> divided_allotments;
    if (allotment1.all_buildings.size() > 1)
    {
        allotment1.calculate_coordinates_of_allotment();
        divided_allotments.push_back(allotment1);
    }

    if (allotment2.all_buildings.size() > 1)
    {
        allotment2.calculate_coordinates_of_allotment();
        divided_allotments.push_back(allotment2);
    }

    return divided_allotments;
}

std::vector<Allotment> divide_allotments_y(Allotment &allotment, int y)
{
    Allotment allotment1; 
    Allotment allotment2;
    for (Coordinates_of_rectangle building : allotment.all_buildings)
    {
        if (building.left_y <= y && building.right_y <= y)
        {
            allotment1.all_buildings.push_back(building);
        }
        else
        {
            allotment2.all_buildings.push_back(building);
        }
    }
    std::vector<Allotment> divided_allotments;
    if (allotment1.all_buildings.size() > 1)
    {
        allotment1.calculate_coordinates_of_allotment();
        divided_allotments.push_back(allotment1);
    }

    if (allotment2.all_buildings.size() > 1)
    {
        allotment2.calculate_coordinates_of_allotment();
        divided_allotments.push_back(allotment2);
    }

    return divided_allotments;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        std::vector<Coordinates_of_rectangle> coordinates_of_buildings;
        int number_of_allotments;
        std::cin >> number_of_allotments;
        int max_x = 0, max_y = 0;

        for (int j = 0; j < number_of_allotments; j++)
        {
            Coordinates_of_rectangle one_coordinates_of_building;
            int left_x, left_y, right_x, right_y;
            std::cin >> left_x >> left_y >> right_x >> right_y;

            if (left_x + 1 == right_x && left_y + 1 == right_y)
            {
                continue;
            }

            one_coordinates_of_building.left_x = left_x;
            one_coordinates_of_building.left_y = left_y;
            one_coordinates_of_building.right_x = right_x;
            one_coordinates_of_building.right_y = right_y;

            coordinates_of_buildings.push_back(one_coordinates_of_building);

            if (right_x > max_x)
            {
                max_x = right_x;
            }

            if (right_y > max_y)
            {
                max_y = right_y;
            }
        }
        if (coordinates_of_buildings.size() <= 1)
        {
            std::cout << "TAK\n";
            continue;
        }

        Allotment allotment;
        allotment.all_buildings = coordinates_of_buildings;

        allotment.coordinates_of_allotment.left_x = 0;
        allotment.coordinates_of_allotment.left_y = 0;
        allotment.coordinates_of_allotment.right_x = max_x;
        allotment.coordinates_of_allotment.right_y = max_y;

        std::deque<Allotment> allotments;
        allotments.push_back(allotment);

        while (!allotments.empty())
        {
            bool continue_while = false;
            Allotment current_allotment_to_cut = allotments.back();
             allotments.pop_back();

            for (Coordinates_of_rectangle building : current_allotment_to_cut.all_buildings)
            {
                if (building.right_x != current_allotment_to_cut.coordinates_of_allotment.right_x && !does_line_cut_the_building_by_x(current_allotment_to_cut.all_buildings, building.right_x))
                {

                    std::vector<Allotment> divided_allotments = divide_allotments_x(current_allotment_to_cut, building.right_x);
                    allotments.insert(allotments.end(), divided_allotments.begin(), divided_allotments.end());
                    continue_while = true;
                    break;
                } else if (building.right_y != current_allotment_to_cut.coordinates_of_allotment.right_y && !does_line_cut_the_building_by_y(current_allotment_to_cut.all_buildings, building.right_y))
                {

                    std::vector<Allotment> divided_allotments = divide_allotments_y(current_allotment_to_cut, building.right_y);
                    allotments.insert(allotments.end(), divided_allotments.begin(), divided_allotments.end());
                    continue_while = true;
                    break;
                }
            }
            if (continue_while)
            {
                continue;
            }



            allotments.push_back(allotment);
            std::cout << "NIE\n";
            break;
        }
        if (allotments.empty())
        {
            std::cout << "TAK\n";
        }
    }
    return 0;
}