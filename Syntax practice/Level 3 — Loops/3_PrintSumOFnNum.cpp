#include <iostream>
using namespace std;

void printSumOfN(int n, int sum = 0) {
    if (n == 0) {
        cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
        return;
    }
    printSumOfN(n - 1, sum + n);
}

int main() {
    int number;
    cout << "Enter a number to calculate the sum of first n natural numbers: ";
    cin >> number;
    int sum = 0;
    for (int i = 1; i <= number; i++) sum += i; // optional check
    printSumOfN(number); 
    return 0;
}
