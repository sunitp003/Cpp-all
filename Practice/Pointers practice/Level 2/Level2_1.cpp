#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Accessing array using arr[i] and *(arr + i):\n\n";

    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << ":>> ";
        cout << " arr[i] = " << arr[i] << "  or ";
        cout << " *(arr + i) = " << *(arr + i) << endl;
    }

    return 0;
}
