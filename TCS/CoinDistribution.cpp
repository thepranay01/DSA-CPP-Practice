#include <bits/stdc++.h>
using namespace std;

int main()
{

    int number;
    cin >> number;

    int one = 0;
    int two = 0;
    int five = (number - 4) / 5;

    if (((number - 5 * five) % 2) == 0)
    {
        one = 2;
    }
    else
    {
        one = 1;
    }
    two = (number - 5 * five - one) / 2;

    cout << one + two + five << endl;
    cout << five << endl;
    cout << two << endl;
    cout << one << endl;

    return 0;
}