#include <bits/stdc++.h>
using namespace std;

bool isEven(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int a;
    cin >> a;

    if (isEven(a))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}