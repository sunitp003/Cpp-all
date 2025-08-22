#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;   // pointer to a

    cout << "\nValue of a directly (a): " << a << endl;
    cout << "Address of a (&a): " << &a << endl;
    cout << "Pointer (ptr): " << ptr << endl;
    cout << "Value of a through pointer (*ptr): " << *ptr << endl;

    *ptr = 20;   // update value at address
    cout << "New value of (a) = " << a <<"\n"<< endl;





}
