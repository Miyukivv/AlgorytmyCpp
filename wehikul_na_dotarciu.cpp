#include <iostream>

struct Measurement_Node
{
    int how_much_times_does_measurement_occured = 1;
    int l;
    int f;

    Measurement_Node *left;
    Measurement_Node *right;

    void show_measurement()
    {
        for (int i = 0; i < how_much_times_does_measurement_occured; i++)
        {
            std::cout << "(" << f << "," << l << ")";
            if (i < how_much_times_does_measurement_occured - 1)
            {
                std::cout << " ";
            }
        }
    }

    void add(int new_f, int new_l)
    {
        if (new_f < f)
        {
            if (left == nullptr)
            {
                left = new Measurement_Node();
                left->f = new_f;
                left->l = new_l;
                // std::cout << "nowy lewy measurement " << new_f << " " << new_l << "\n";
                // std::cout << std::flush;
            }
            else
            {
                left->add(new_f, new_l);
                // std::cout << "delegacja do lewego m " << new_f << " " << new_l << "\n";
                // std::cout << std::flush;
            }
        }
        else if (new_f > f)
        {
            if (right == nullptr)
            {
                right = new Measurement_Node();
                right->f = new_f;
                right->l = new_l;
                // std::cout << "nowy prawy measurement " << new_f << " " << new_l << "\n";
                // std::cout<<"wartosc f: "<<f<<"  wartosc l:"<<l<<"\n";
                // std::cout << std::flush;
            }
            else
            {
                right->add(new_f, new_l);
                // std::cout << "delegacja do prawego m " << new_f << " " << new_l << "\n";
                // std::cout << std::flush;
            }
        }
        else
        {
            if (new_l < l)
            {
                if (left == nullptr)
                {
                    left = new Measurement_Node();
                    left->f = new_f;
                    left->l = new_l;
                    // std::cout << "nowy lewy measurement długość fali " << new_f << " " << new_l << "\n";
                    // std::cout << std::flush;
                }
                else
                {
                    left->add(new_f, new_l);
                    // std::cout << "delegacja do lewego measurement długość fali " << new_f << " " << new_l << "\n";
                    // std::cout << std::flush;
                }
            }
            else if (new_l > l)
            {

                if (right == nullptr)
                {
                    right = new Measurement_Node();
                    right->f = new_f;
                    right->l = new_l;
                    // std::cout << "nowy prawy measurement długość fali " << new_f << " " << new_l << "\n";
                    // std::cout << std::flush;
                }
                else
                {
                    right->add(new_f, new_l);
                    // std::cout << "delegacja prawego measurement długość fali " << new_f << " " << new_l << "\n";
                    // std::cout << std::flush;
                }
            }
            else
            {
                how_much_times_does_measurement_occured++;
                // std::cout << "równy\n";
                // std::cout << std::flush;
            }
        }
    }
};

struct Node
{
    int year;
    Measurement_Node *measurement_root;

    Node *left = nullptr;
    Node *right = nullptr;

    int get_year()
    {
        return year;
    }

    void add(int new_f, int new_l, int new_year)
    {
        if (new_year < year)
        {
            if (left == nullptr)
            {
                left = new Node();
                left->measurement_root = new Measurement_Node();
                left->measurement_root->f = new_f;
                left->measurement_root->l = new_l;
                left->year = new_year;
                // std::cout << "nowy lewy rok " << new_year << "\n";
                // std::cout << std::flush;
            }
            else
            {
                left->add(new_f, new_l, new_year);
                // std::cout << "delegacja lewy rok " << new_year << "\n";
                // std::cout << std::flush;
            }
        }
        else if (new_year > year)
        {
            if (right == nullptr)
            {
                right = new Node();
                right->measurement_root = new Measurement_Node();
                right->measurement_root->f = new_f;
                right->measurement_root->l = new_l;
                right->year = new_year;
                // std::cout << "nowy right rok " << new_year << "\n";
                // std::cout << std::flush;
            }
            else
            {
                right->add(new_f, new_l, new_year);
                // std::cout << "delegacja right rok " << new_year << "\n";
                // std::cout << std::flush;
            }
        }
        else
        {
            measurement_root->add(new_f, new_l);
            // std::cout << "ten sam rok " << new_year << "\n";
            // std::cout << std::flush;
        }
    }
};

void show_measurement_tree(Measurement_Node *measurement)
{
    if (measurement != nullptr)
    {
        show_measurement_tree(measurement->left);
        measurement->show_measurement();
        std::cout << " ";
        show_measurement_tree(measurement->right);
    }
}

void show_tree(Node *node)
{
    if (node != nullptr)
    {
        show_tree(node->left);
        std::cout << node->get_year() << ": ";
        show_measurement_tree(node->measurement_root);
        std::cout << "\n";
        show_tree(node->right);
    }
}

int main()
{
    int number_of_trips;
    int year; 
    int f;    
    int l;    
    bool is_dotarty = true;
    std::cin >> number_of_trips;

    Node *root = nullptr;

    for (int i = 0; i < number_of_trips; i++)
    {
        std::cin >> year >> f >> l;

        if (f > 20 && f < 20000)
        {
            int v = l * f;
            if (v >= 31300 && v <= 35000)
            {

                if (root == nullptr)
                {
                    Measurement_Node *measurement = new Measurement_Node();
                    measurement->f = f;
                    measurement->l = l;


                    root = new Node();
                    root->measurement_root = measurement;
                    root->year = year;
                }
                else
                {
                    root->add(f, l, year);

                }

                if (f < 275 || f > 325)
                {
                    is_dotarty = false;
                }
            }
        }
    }
    show_tree(root);

    if (root == nullptr)
    {
        is_dotarty = false;
    }
    if (is_dotarty)
    {
        std::cout << "TAK";
    }
    else
    {
        std::cout << "NIE";
    }

    delete[] root;

    return 0;
}