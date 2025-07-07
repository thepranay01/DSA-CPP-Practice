#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Number: ";
    cin >> n;

    if (n > 0)
    {
        cout << "Number is Positive" << endl;
    }
    else if (n == 0)
    {
        cout << "Number is Zero" << endl;
    }
    else
    {
        cout << "Number is Negative" << endl;
    }

    if (n % 2 == 0)
    {
        cout << n << " is Even" << endl;
    }
    else
    {
        cout << n << " is Odd" << endl;
    }

    return 0;
}