

#include <iostream>
using namespace std;

void printTable(int n, int i = 1) {
    if (i > 10) return;  // base case
    cout << n << " * " << i << " = " << n * i << endl;
    printTable(n, i + 1);  // recursive call
}

int main() {
    int number;
    cout << "Enter a number to print its multiplication table: ";
    cin >> number;
    printTable(number);
    return 0;
}


