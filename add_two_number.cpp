#include <iostream>
using namespace std;

// function declaration
int addition(int a, int b);

int main()
{
    // global variables
    int num1; // to store first number
    int num2; // to store second number
    int add;  // to store addition
    
    cout << "----Welcome----";


    // read numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // call function
    add = addition(num1, num2);

    // print addition
    cout << "Addition is: " << add << endl;

    return 0;
}

// function definition
int addition(int a, int b)
{
    return (a + b);
}
