#include <bits/stdc++.h>
using namespace std;
double power(double x, int n)
{
    if (n == 1)
    {
        return x;
    }

    if (n == 0)
    {
        return 1;
    }

    if (n == -1)
    {
        return 1 / x;
    }
    if (n % 2)
    {
        return x * power(x, n - 1);
    }
    return power(x * x, n / 2);
}

int main()
{
    double x;
    int n;
    cin >> x;
    cin >> n;

    cout << power(x, n);

    return 0;
}