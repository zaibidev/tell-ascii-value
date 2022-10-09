#include <iostream>
using namespace std;

// function declaration
int multiplication(int a, int b);

int main()
{
    int num1;     // to store first number
    int num2;     // to store second number
    int multiply; // to store multiplication

    // read numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // call function
    multiply = multiplication(num1, num2);

    // print multiplication
    cout << "Multiplication is: " << multiply << endl;

    return 0;
}

// function definition
int multiplication(int a, int b)
{
    return (a * b);
}