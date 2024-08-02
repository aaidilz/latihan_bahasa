// create object from food class and call print function

// With this snippet from function_in_class.cpp:

#include <iostream>
using namespace std;

class Food
{
public:
    string name;
    double price;
    double weight;
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Weight: " << weight << endl;
    }
    void setValues(string name, double price, double weight)
    {
        this->name = name;
        this->price = price;
        this->weight = weight;
    }
};

int main()
{
    Food Pizza;
    Pizza.setValues("Pizza", 10.5, 0.5);
    Pizza.print();
    return 0;
}