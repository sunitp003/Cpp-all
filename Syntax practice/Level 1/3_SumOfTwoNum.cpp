//  Take two numbers from the user and print their product.


/*  wrong code 
#include<iostream>
using namespace std;    

int Sum(float a, float b){return a + b;}   use float instead of int 

int main(){
    float a, b;
    cin >> a >> b;
    Sum(a,b);
return 0;
} */


/* another correct version
#include <iostream>
using namespace std;

float Sum(float a, float b) {  // return float, not int
    return a + b;
}

int main() {
    float a, b;
    cin >> a >> b;
    cout << "Sum: " << Sum(a, b) << endl; // use the return value
    return 0;
}
 */


#include <iostream>
using namespace std;

void Sum(float a, float b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Sum(a, b);
}
