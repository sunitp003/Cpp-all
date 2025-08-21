#include <iostream>
using namespace std;


bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    cout << "\nEnter an integer: ";
    cin >> n;

    if (isEven(n)) {
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }

    return 0;
}

/*
#include <iostream>
using namespace std;

string evenOdd(int n) {
    return (n % 2 == 0 ? "Even" : "Odd");
}

int main() {
    int n;
    cin >> n;
    cout << evenOdd(n);
}

*/