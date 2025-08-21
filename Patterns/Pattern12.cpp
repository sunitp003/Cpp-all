// square for Alphabets
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the grid: ";
    cin >> n;

    char count = 'A';  

    for (int i = 1; i <= n; i++) {           // Outer loop for rows
        for (int j = 1; j <= n; j++) {       // Inner loop for columns
            cout << count << " ";            // Print the current counter value
            count++;                         // Increment the counter
        }
        cout << endl;                        // Move to the next line after each row
    }

    return 0;
}

