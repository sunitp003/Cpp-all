// square grid continous numberr

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the grid: ";
    cin >> n;

    int count = 1;  // Start the counter from 1

    for (int i = 1; i <= n; i++) {           // Outer loop for rows
        for (int j = 1; j <= n; j++) {       // Inner loop for columns
            cout << count << " ";            // Print the current counter value
            count++;                         // Increment the counter
        }
        cout << endl;                        // Move to the next line after each row
    }

    return 0;
}


////// OR ????

// int main() {
// int n;
// cout << "Enter the size of the grid: ";
// cin>>n;


// int i = 1;

// int count = 1;
//         while(i<=n) {
//             int j=1;
//                 while (j <=n) {
//                     cout<<count;
//                     count = count + 1;
//                     j = j + 1;
//                                 }
//             cout<<endl;
//             i = i +1;
//                     }


// }