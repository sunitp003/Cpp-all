// Find the largest number in an array.

#include <iostream>
#include <vector>
using namespace std;

void FindLrgest(int arr[], int size)
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }

        else if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << max;
}

int main()
{
    int size;
    cout << "\nEnter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    FindLrgest(arr, size);

    return 0;
}