#include <iostream>
using namespace std;

int main() {
    float subject1, subject2, subject3, average;

    // Prompt user to enter marks for 3 subjects
    cout << "Enter marks for subject 1: ";
    cin >> subject1;

    cout << "Enter marks for subject 2: ";
    cin >> subject2;

    cout << "Enter marks for subject 3: ";
    cin >> subject3;

    // Calculate average
    average = (subject1 + subject2 + subject3) / 3;

    // Display average
    cout << "Average score: " << average << endl;

    // Determine grade using if-else
    if (average >= 70 && average <= 100) {
        cout << "Grade: A" << endl;
    } else if (average >= 60 && average <= 69) {
        cout << "Grade: B" << endl;
    } else if (average >= 50 && average <= 59) {
        cout << "Grade: C" << endl;
    } else if (average >= 40 && average <= 49) {
        cout << "Grade: D" << endl;
    } else if (average < 40) {
        cout << "Grade: E (Fail)" << endl;
    } else {
        cout << "Invalid average score!" << endl;
    }

    return 0;
}
