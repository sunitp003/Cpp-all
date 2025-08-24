/*
Best Case: 𝑂(1) — if the element is at the first index.
Worst Case: 𝑂(𝑛) — if the element is at the last index or not present.
Average Case: 𝑂(𝑛)

*/
#include<iostream>
using namespace std;

int SearchEle(int arr[], int n, int key){
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return index if found
        }
    }
    return -1;  // Return -1 if not found
}

int main(){
    int n;
    cout << "\nEnter the size of arr: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " Elements: ";
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
