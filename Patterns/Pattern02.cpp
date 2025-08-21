// sqyare patt for horizontal same number

#include <iostream>
using namespace std;

// int main (){
// int n;
// cout<<"Enter a number : ";
//  cin>>n;

//  for (int i = 1; i <=n; i++)
//  {
//     for (int j = 1; j <=n; j++)
//     {
//         cout<<" "<<  i  <<" ";
//     }
//     cout<<endl;
//  }
 

// }

// OR

int main (){
    int n;
    cout << "ENTER A NUMBER :";
    cin>>n;


    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<" "<< i <<" " ;
            j=j+1;
        }
        cout<<endl;

        i++;
        
    }
    
}