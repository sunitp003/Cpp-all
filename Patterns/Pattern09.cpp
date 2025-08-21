// right angle triangle but each rows last number is same 
#include <iostream>
using namespace std;

int main (){
    int n ;
    cout<< " Enter the Number : ";
    cin>>n;
    
for (int i = 1; i <=n; i++)
{
    
    for (int j = 1; j <=i; j++)
    {
        cout <<i-j+1<<" ";
    }
    cout<<endl;
}
}