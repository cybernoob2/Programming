#include <iostream>

using namespace std;


int main()
{
    int num1, num2;
    char c;

    cout << "Simple calculator" << endl;
    cout << "Enter first no. to be calculated:";
    cin >> num1;

    cout << "Enter the second no. to be calculated:";
    cin >> num2;

    cout << "Enter the operand to be used:";
    cin >> c;
    
    switch(c)
    {
        case '+':
        cout << "num1 + num2=";
        break;

        case '-':
        cout << " num1 - num2=";
        break;

        case '*':
        cout << num1 * num2;
        break;

        case '/':
        cout << num1/num2;
        break;

        default:
        cout << "Please enter an appropriate operand!!";
    }
    
    return 0;

}