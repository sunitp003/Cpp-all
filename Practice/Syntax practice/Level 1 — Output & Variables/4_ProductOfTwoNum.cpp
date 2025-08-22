//  Declare two integers, assign values, print their sum

#include <iostream>
using namespace std;

float Mul(float a, float b) {return a * b;}

int main() {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Mul: " << Mul(a, b) << endl; // use the return value
    return 0;
}
