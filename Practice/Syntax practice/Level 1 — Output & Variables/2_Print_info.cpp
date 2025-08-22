// Print your name, age, and city each on a new line.

#include <iostream>
// #include <string>
// 1. Remove unused headers
// Since you didn’t use any string type, <string> isn’t needed
using namespace std;

void getDetails(string &name, int &age, string &city) {
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Clear leftover newline

    cout << "Enter your city: ";
    getline(cin, city);
}

void displayDetails(const string &name, int age, const string &city) {
    cout << "\nYour details are:\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
}

int main() {
    string name, city;
    int age;

    cout << "Welcome to the Print Info Program!\n";
    cout << "-----------------------------------\n";

    getDetails(name, age, city);
    displayDetails(name, age, city);

    return 0;
}
