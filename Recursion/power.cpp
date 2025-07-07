#include <bits/stdc++.h>
using namespace std;

int power(int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n == 1)
    {
        return 2;
    }

    int store = power(n / 2);
    if (n % 2 == 0)
    {
        return store * store;
    }
    else
    {
        return (2 * store * store);
    }
}

int main()
{
    int n;
    cin >> n;

    cout << power(n);
    return 0;
}