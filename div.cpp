#include <iostream>
using namespace std;

int main() {
    int num1, num2, result;

    // Ask the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Ask the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Division of two numbers
     result= num1 / num2;

    // Displaying the result
    cout << "The result of dividing " << num1 << " by " << num2 << " is " << result<< endl;

    return 0;
}