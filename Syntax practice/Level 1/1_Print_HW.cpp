// Print "Hello World" to the screen.

#include<iostream>
// #include<string>
// 1. Remove unused headers
// Since you didn’t use any string type, <string> isn’t needed
using namespace std;

void PrintHW(string message) {
    cout << message << endl;
}
int main() {
    PrintHW("Hello, World!");
    return 0;
}
