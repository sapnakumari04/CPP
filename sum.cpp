#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;

    // Ask the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Ask the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Adding the two numbers
    sum = num1 + num2;

    // Displaying the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}
