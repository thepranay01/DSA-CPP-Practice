#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Value of a is : ";
    cin >> a;

    cout << "Value of b is : ";
    cin >> b;

    char op;
    cout << "opteration to perform : ";
    cin >> op;

    cout << "The Output is :";

    switch (op)
    {
    case '+':
        cout << (a + b);
        break;

    case '-':
        cout << (a - b);
        break;

    case '*':
        cout << (a * b);
        break;

    case '/':
        cout << (a / b);
        break;

    case '%':
        cout << (a % b);
        break;

    default:
        cout << "Please, select valid operation";
        break;
    }

    return 0;
}