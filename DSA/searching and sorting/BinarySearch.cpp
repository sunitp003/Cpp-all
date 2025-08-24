/*
Best Case: 𝑂(1) — if the element is at the middle.
Worst Case: 𝑂(log𝑛)
Average Case: 𝑂(log𝑛)
*/
#include <iostream>
using namespace std;

int SearchEle(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else {
            //key < arr[mid]
            end = mid - 1;
        }
    }

    return -1; // Element not found
}

int main(){
    int n;
    cout << "\nEnter the size of arr: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " Elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "\nEnter the element to be searched: ";
    cin >> key;

    int result = SearchEle(arr, n, key);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
