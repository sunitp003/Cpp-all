#include <iostream>
using namespace std;

string greaterNum(float a, float b) {
    return (a == b ? "Both equal" : 
           (a > b ? "Greater: " + to_string(a) : 
           "Greater: " + to_string(b)));
}

int main() {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << greaterNum(a, b);
}
