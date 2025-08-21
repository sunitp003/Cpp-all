// right angle triangle for continous numbers 

#include <iostream>
using namespace std;

int main (){
    int a ;
    cout<< " Enter the Number : ";
    cin>>a;
    int count =1;

for (int i = 1; i <=a; i++)
{
    
    for (int j = 1; j <=i; j++)
    {
        cout << count<<" ";
        count++;
    }
    cout<<endl;
}
} 