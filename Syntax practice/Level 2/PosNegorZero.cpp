// Take a number and check if it’s positive, negative, or zero.
// (condition) ? value_if_true : value_if_false;

#include <iostream>
using namespace std;

int main()
{
    float num;
    cout << "\nEnter a number: ";
    cin >> num;
    cout << (num > 0 ? "Positive \n" : (num < 0 ? "Negative\n" : "Zero\n"));
}


/* with function 
#include <iostream>
using namespace std;

string check(float num) {
    return (num > 0 ? "Positive" : (num < 0 ? "Negative" : "Zero"));
}

int main() {
    float num;
    cin >> num;
    cout << check(num);
}

*/