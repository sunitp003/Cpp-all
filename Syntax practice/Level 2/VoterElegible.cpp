#include <iostream>
using namespace std;

string isEligibleToVote(int age) {
    return (age <= 0 ? "Invalid age" 
        : (age < 18 ? "Not eligible to vote. Age: " + to_string(age) 
        : "Eligible to vote. Age: " + to_string(age)));
}

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << isEligibleToVote(age);
}
