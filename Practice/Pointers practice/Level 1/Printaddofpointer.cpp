#include<iostream>
using namespace std;


int main (){
    int a =12;
    int* ptr =&a;

    cout
    <<"\n a = " <<a  
    <<"\n *ptr = " << *ptr 
    <<"\n &a = " << &a
    <<"\n ptr = " << ptr 
    <<"\n &ptr =  " << &ptr;
    /*
    a =12
    *ptr = 12
    &a = 0x224fbff85c
    ptr = 0x224fbff85c
    &ptr =  0x224fbff850
    
    */

    int b = 50 ;
    int* q =&b;
    cout << "\nb : " << b << endl; // 12
    cout << "q : "   << q   << endl;
    cout << "\nBefore swap:" << endl;
    cout << "*ptr : " << *ptr << endl; // 12
    cout << "*q : "   << *q   << endl; // 50

    // swap karna
    int* temp = ptr; // temp -> a
    ptr = q;         // ptr -> b
    q = temp;        // q -> a

    cout << "\nAfter swap:" << endl;
    cout << "*ptr : " << *ptr << endl; // ab 50
    cout << "*q : "   << *q   << endl; // ab 12
    cout<<"\n";

    cout
    <<"\n a = " <<a  
    <<"\n *ptr = " << *ptr 
    <<"\n &a = " << &a
    <<"\n ptr = " << ptr 
    <<"\n &ptr =  " << &ptr;

}