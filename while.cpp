// creating piramid using while loop
#include <iostream>
using namespace std;

string piramid(int n) {
    // declare a variable to store the result
    string result = "";
    // loop through the number of rows
    int i = 1;
    while (i <= n) {
        // loop number of spaces
        int j = 1;
        while (j <= n - i) {
            result += " ";
            j++;
        }
        // loop number of stars
        int k = 1;
        while (k <= 2 * i - 1) {
            result += "*";
            k++;
        }
        // add new line
        result += "\n";
        i++;
    }
    // return the result
    return result;
}

int main() {
    // declare a variable
    int n;
    // ask for user input
    cout << "Enter the number of rows: ";
    // get user input
    cin >> n;
    // output the piramid
    cout << piramid(n);
    // return 0 to indicate the program ran successfully
    return 0;
}