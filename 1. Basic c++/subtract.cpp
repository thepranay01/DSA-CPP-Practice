#include <bits/stdc++.h>
using namespace std;

int subtract(int a, int b)
{

    if (a > b)
    {
        return (a - b);
    }

    return (b - a);
}

int main()

{
    int a, b;

    cout << "input a : ";
    cin >> a;

    cout << "input b : ";
    cin >> b;

    cout << subtract(a, b);

    return 0;
}