// Take a string and print its length (without using length() function).

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  // to read full line including spaces

    int count = 0;
    for (char c : str) {
        count++;
    }

    cout << "Length of the string is: " << count << endl;

    return 0;
}
