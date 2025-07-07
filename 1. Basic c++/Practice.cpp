#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (1)

    {
        char c;
        cout << "Enter the value" << endl;
        cin >> c;
        int a = int(c);

        if (a == 45)
            break;

        if (a >= 65 && a <= 90)
        {
            cout << "This is a upper case" << endl;
        }
        else if (a >= 97 && a <= 122)
        {
            cout << "This is a lower case" << endl;
        }
        else if (a >= 48 && a <= 57)
        {
            cout << "This is a Number" << endl;
        }
        else
        {
            cout << "It is neither a number nor a char" << endl;
        }
    }

    return 0;
}