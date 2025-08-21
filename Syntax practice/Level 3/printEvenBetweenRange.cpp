// Print all even numbers between a range
/*
#include <iostream>
using namespace std;

void EvenNums(int start , int end)
{
   int count = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            count++;
            if (count % 10 == 0) cout << endl; // newline every 10 numbers
        }
    }
    cout << "\nTotal even numbers: " << count << endl;
}


int main()
{
    int start, end;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    if (start > end)
    {
        cout << "Invalid range. Starting number should be less than or equal to ending number." << endl;
        return 1; // Exit with an error code
    }

    cout << "Even numbers between " << start << " and " << end << ": "<<endl;
    EvenNums(start, end); // Call the function to print even numbers
    cout << endl;         // Print a newline at the end
    return 0;
}
*/

 // Recursion version 

#include <iostream>
using namespace std;

void printEven(int start, int end, int count = 0) {
    if (start > end) {
        cout << "\nTotal even numbers: " << count << endl;
        return;
    }
    if (start % 2 == 0) {
        cout << start << " ";
        count++;
        if (count % 10 == 0) cout << endl;
    }
    printEven(start + 1, end, count);
}

int main() {
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    if (start > end) {
        cout << "Invalid range!\n";
        return 1;
    }

    cout << "Even numbers between " << start << " and " << end << ":\n";
    printEven(start, end);
}

