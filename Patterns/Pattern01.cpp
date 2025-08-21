// Square pattern *


#include <iostream>
using namespace std;

// int main (){
//     int a ;
//     cout<< " Enter the Number : ";
//     cin>>a;
    
// for (int i = 1; i <=a; i++)
// {
    
//     for (int j = 1; j <=a; j++)
//     {
//         cout << " # ";
//     }
//     cout<<endl;
// }


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
            cout<<" $ ";
            j=j+1;
        }
        cout<<endl;

        i++;
        
    }
    
}