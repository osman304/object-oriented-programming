#include <iostream>
#include <cmath>  // for pow()
using namespace std;

int main() {
    float weight, height, bmi;

    // Prompt the user to enter weight and height
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculate BMI using the formula: BMI = weight / (height * height)
    bmi = weight / pow(height, 2);

    // Display BMI
    cout << "Your BMI is: " << bmi << endl;

    // Classify and display BMI category
    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Category: Normal weight" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Category: Overweight" << endl;
    } else {
        cout << "Category: Obesity" << endl;
    }

    return 0;
}
