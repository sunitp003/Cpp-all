// Take n numbers in an array and print them.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "\nEnter the size of array: ";
    cin >> size;

    vector<int> arr(size);  // dynamic array

    cout << "Enter " << size << " elements in the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "The elements in the array are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
