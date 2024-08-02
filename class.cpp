// create food class
#include <iostream>
using namespace std;

// create food class
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
};

int main() {
    // create object from food class
    Food Pizza;
    Pizza.name = "Pizza";
    Pizza.price = 10.5;
    Pizza.weight = 0.5;
    Pizza.print();
    return 0;
}