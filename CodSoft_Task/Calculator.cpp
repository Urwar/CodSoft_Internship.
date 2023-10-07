#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    char word;
    cout << "Enter a First Number: ";
    cin >> num1;
    cout << "Enter a Second Number: ";
    cin >> num2;
    cout << "Choose Arithmetic Operation given below:" << endl;
    cout << "Enter a for Addition" << endl;
    cout << "Enter s for Subtraction" << endl;
    cout << "Enter m for Multiplication" << endl;
    cout << "Enter d for Division" << endl;
    cin >> word;
    if (word == 'a')
    {
        cout << "The sum= " << num1 + num2 << endl;
    }
    else if (word == 's')
    {
        cout << "The subtraction= " << num1 - num2 << endl;
    }
    else if (word == 'm')
    {
        cout << "The multiplication= " << num1 * num2 << endl;
    }
    else if (word == 'd')
    {
        cout << "The division= " << num1 / num2 << endl;
    }
    return 0;
}