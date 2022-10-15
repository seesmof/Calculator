// include necessary libraries
#include <iostream>
#include <cmath>
using namespace std;

// declare main function
int main(int argc, char **argv)
{
    // declare necessary variables
    char sign;
    double result, A, B;

    // output program intro
    cout << "**************************** CALCULATOR *****************************" << endl
         << endl;

    // ask user to enter two numbers he wants to calculate
    cout << "Enter number one: ";
    cin >> A;
    cout << "Enter number two: ";
    cin >> B;

    // ask user to enter the action he wants to perform
    cout << "Enter operator (+ - * / ^): ";
    cin >> sign;

    // add switch that will calculate the result
    switch (sign)
    {
        // in case user enterd + sign, the result will be A + B
    case '+':
        result = A + B;
        cout << A << " + " << B << " = " << result << endl;
        break;
        // in case user enterd - sign, the result will be A - B
    case '-':
        result = A - B;
        cout << A << " - " << B << " = " << result << endl;
        break;
        // in case user enterd * sign, the result will be A * B
    case '*':
        result = A * B;
        cout << A << " * " << B << " = " << result << endl;
        break;
        // in case user enterd / sign, the result will be A / B
    case '/':
        result = A / B;
        cout << A << " / " << B << " = " << result << endl;
        break;
        // in case user enterd ^ sign, the result will be A ^ B
    case '^':
        result = pow(A, B);
        cout << A << " to the power of " << B << " = " << result << endl;
        break;
        // in case user enterd other sign, output error message
    default:
        cout << "Invalid sign" << endl;
        break;
    }

    // output program outro
    cout << endl;
    cout << "*********************************************************************" << endl;

    // end main function
    return 0;
}