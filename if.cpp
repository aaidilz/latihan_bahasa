#include <iostream>
using namespace std;

// main function
string nameCheck(string name) {
    // check if name condition is met
    if (name == "Aidil") {
        return "Hello, Aidil!";
    } else {
        return "Hello, stranger!";
    }
}

int main() {
    // diclare a variable
    string name;
    // ask for user input
    cout << "What is your name? ";
    // get user input
    cin >> name;
    // output the user input
    cout << nameCheck(name) << endl;
    // return 0 to indicate the program ran successfully
    return 0;
}