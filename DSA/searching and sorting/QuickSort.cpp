#include <iostream>
using namespace std;

// Function to print array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Partition function
int partition(int arr[], int s, int e) {
    int pivot = arr[s]; // taking first element as pivot
    int cnt = 0;        // count of elements smaller than pivot

    // counting elements smaller than pivot
    for(int i = s + 1; i <= e; i++) {  //
        if(arr[i] <= pivot) {       // <= for stability
            cnt++;  
        }
    }

    // place pivot at right position
    int pivotIndex = s + cnt;       // pivot's correct index
    swap(arr[pivotIndex], arr[s]);  // swap pivot with first element

    // left and right part sorting
    int i = s, j = e;               // two pointers
    while(i < pivotIndex && j > pivotIndex) { // until both pointers cross pivotIndex
        while(arr[i] <= pivot) {            //  
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex) { // both elements are out of place
            swap(arr[i++], arr[j--]);  // swap and move pointers
        }
    }
    return pivotIndex;
}

// Quicksort function
void quicksort(int arr[], int s, int e) {
    if(s >= e) {
        return;
    }
    int p = partition(arr, s, e); // p is pivot index
    quicksort(arr, s, p - 1);    // left part
    quicksort(arr, p + 1, e);    // right part
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n]; // dynamic array

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nArray before sorting: ";
    printArray(arr, n);

    quicksort(arr, 0, n - 1);

    cout << "Array after sorting: ";
    printArray(arr, n);

    delete[] arr; // free memory
    return 0;
}
