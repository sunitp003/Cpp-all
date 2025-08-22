#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    cout << (num <= 0 ? "Invalid number" 
            : (num % 5 == 0 && num % 11 == 0 
            ? to_string(num) + " is divisible by both 5 and 11" 
            : to_string(num) + " is NOT divisible by both 5 and 11"));
return 0;
}
