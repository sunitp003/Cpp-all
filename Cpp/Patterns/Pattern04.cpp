// square revers vertical same number

#include <iostream>
using namespace std;

// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = n; j >= 1; j--) {  
//             cout<<" "<< j <<" ";
//         }
//         cout << endl;  
//     }

//     return 0;
// }



/////  OR

// int main(){
//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     int i=1;


//     while (i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<" "<<n-j+1<<" ";
//             j++;
//         }
//     cout<<endl ;
//     i++;
//     }




// }


/////// or 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {               // Outer for loop for rows
        for (int j = 1; j <= n; j++) {           // Inner for loop for columns
            cout << " " << n - j + 1 << " ";     // Print values in descending order from n to 1
        }
        cout << endl;                            // Move to the next line after each row
    }

    return 0;
}
