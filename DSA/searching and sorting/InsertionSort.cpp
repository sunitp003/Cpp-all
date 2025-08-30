#include <iostream>
#include <vector>
using namespace std;

// Function to print the array
void printArray(const vector<int> &arr)
{
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}

// Insertion Sort
void insertionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 1; i < n; ++i) // Start from 2nd element
    {
        int key = arr[i];    // Element to insert
        int j = i - 1;       // Index of the previous element

        // Shift elements of arr[0..i-1] that are greater than key
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // Shift right
            j--;
        }

        arr[j + 1] = key; // Place key in correct position
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> data(n);
    cout << "Enter " << n << " elements:\n";
    for (int &val : data)
    {
        cin >> val;
    }

    cout << "Original array: ";
    printArray(data);

    insertionSort(data);

    cout << "Sorted array:   ";
    printArray(data);

    return 0;
}
