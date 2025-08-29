#include <iostream>
#include <vector>
using namespace std;

// Function to print the array
void printArray(const vector<int> &arr)
{
    for (const int &val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}

// Selection Sort using references and indexing
void selectionSort(vector<int> &arr)
{
    int n = arr.size(); // Get the size of the vector

    for (int i = 0; i < n - 1; ++i)     // Traverse through all array elements
    {
        int minIndex = i;           // Find the minimum element in unsorted array

        for (int j = i + 1; j < n; ++j) // Use indexing to find the minimum
        {
            if (arr[j] < arr[minIndex])  // Compare using indexing
            {
                minIndex = j;   // Update minIndex if a smaller element is found
            }
        }

        // Swap without using pointers
        if (minIndex != i)  // Swap only if needed
        {   
            int temp = arr[i];     // Swap using indexing
            arr[i] = arr[minIndex]; // Swap using indexing
            arr[minIndex] = temp;  // Swap using indexing
        }
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

    selectionSort(data);

    cout << "Sorted array:   ";
    printArray(data);

    return 0;
}

/*
Using array
#include <iostream>
using namespace std;

// Function to print the array
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Selection Sort using array indexing
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap if needed
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100]; // assuming max size is 100
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array:   ";
    printArray(arr, n);

    return 0;
}


*/