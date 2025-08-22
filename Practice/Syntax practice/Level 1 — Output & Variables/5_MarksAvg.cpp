// Store your marks in three subjects and print the average.
/*
#include <iostream>
using namespace std;
void getmarks(int &marks1, int &marks2, int &marks3) {
    cout << "Enter marks for subject 1: ";
    cin >> marks1;

    cout << "Enter marks for subject 2: ";
    cin >> marks2;

    cout << "Enter marks for subject 3: ";
    cin >> marks3;
}
void avgmarks(int marks1, int marks2, int marks3) {
    float average = (marks1 + marks2 + marks3) / 3.0;
    cout << "Average marks: " << average << endl;
}


int main(){

    int marks1, marks2, marks3;

    getmarks(marks1, marks2, marks3);
    avgmarks(marks1, marks2, marks3);
    return 0;

}*/

// more efficient version using arrays
#include <iostream>
using namespace std;
void getMarks(int marks[], int count) {
    for (int i = 0; i < count; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}

void avgMarks(const int marks[], int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += marks[i];
    }
    cout << "Average marks: " << sum / (float)count << endl;
}

int main() {
    const int subjects = 3;
    int marks[subjects];

    getMarks(marks, subjects);
    avgMarks(marks, subjects);
}
