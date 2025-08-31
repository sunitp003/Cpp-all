#include <iostream>
#include <vector>
using namespace std;

// Function to print the array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// -------------------------
// Merge Function
// Left half:  arr[start ... mid]
// Right half: arr[mid+1 ... end]
// -------------------------
void merge(vector<int>& arr, int start, int mid, int end) {
    vector<int> temp(end - start + 1); // Temporary array

    int i = start;     // Pointer for Left half
    int j = mid + 1;   // Pointer for Right half
    int k = 0;         // Pointer for temp[]

    // Merge Left and Right halves into temp[]
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {   // <= ensures stability
            temp[k++] = arr[i++]; // Copy from Left half
        } else {
            temp[k++] = arr[j++];  // Copy from Right half
        }
    }

    // Copy remaining elements from Left half
    while (i <= mid) {
        temp[k++] = arr[i++];  // Copy from Left half
    }

    // Copy remaining elements from Right half
    while (j <= end) {
        temp[k++] = arr[j++];  // Copy from Right half
    }

    // Copy temp[] back into arr[start...end]
    for (int p = 0; p < temp.size(); p++) // 
    {  
        arr[start + p] = temp[p];  // Copy back to original array
    }
}

// -------------------------
// Recursive Merge Sort
// -------------------------
void mergeSort(vector<int>& arr, int start, int end) {
    if (start < end) {   // At least 2 elements
        int mid = start + (end - start) / 2;

        // Sort Left half
        mergeSort(arr, start, mid);

        // Sort Right half
        mergeSort(arr, mid + 1, end);

        // Merge both halves
        merge(arr, start, mid, end);
    }
}

// -------------------------
// Main Function
// -------------------------
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original Array: ";
    printArray(arr);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array:   ";
    printArray(arr);

    return 0;
}
