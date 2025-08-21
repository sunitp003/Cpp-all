// Print numbers from 1 to 10.

#include<iostream>
using namespace std;

void PrintNums(int n){
    if(n > 10) {
        return; // Base case: stop when n exceeds 10
    }
    cout << n << " "; // Print the current number
    PrintNums(n + 1); // Recursive call with the next number
}
int main() {
    PrintNums(1); // Start printing from 1
    cout << endl; // Print a newline at the end
    return 0;
}