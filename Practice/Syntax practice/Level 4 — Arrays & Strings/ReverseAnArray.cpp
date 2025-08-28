#include <iostream>
#include <vector>
using namespace std;

void ReverseArray(vector<int>& arr) {
    int i = 0, j = arr.size() - 1;
    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    cout << "Reversed array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    /*
        arr = your vector/array
        x = each element in arr, one by one
        So if arr = {10, 20, 30}, the loop runs 3 times with:
        1st iteration → x = 10
        2nd iteration → x = 20    
        3rd iteration → x = 30  */
    /*
    similar approach
    for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
    }

    */
    cout << endl;
}

int main() {
    int size;
    cout << "\nEnter the size of array: ";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter " << size << " elements in the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    ReverseArray(arr);

    return 0;
}
