#include <iostream>
using namespace std;

// fuction to add two numbers
// int is a return type that indicates the function returns an integer
int tambah(int a, int b) {
    return a + b;
}
// print the result
// void is a return type that indicates the function does not return a value
void printHasil(int hasil) { 
    cout << "Hasilnya adalah: " << hasil << endl;
}
// main function
int main() {
    // declare variable
    int a, b, hasil;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    hasil = tambah(a, b);
    printHasil(hasil);

    return 0;
}