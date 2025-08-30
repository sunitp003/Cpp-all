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

// Bubble Sort using references and indexing
void bubbleSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) // i is for number of passes
    {
        bool swapped = false; // To optimize if already sorted

        for (int j = 0; j < n - i - 1; ++j) // Compare adjacent elements
        {
            if (arr[j] > arr[j + 1]) // Swap if elements are out of order
            {
                swap(arr[j], arr[j + 1]); // Swap using std::swap

                swapped = true;
            }
        }

        // If no elements were swapped → array is already sorted
        if (!swapped)
            break;
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

    bubbleSort(data);

    cout << "Sorted array:   ";
    printArray(data);

    return 0;
}
