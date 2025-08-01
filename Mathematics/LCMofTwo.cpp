#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return GCD(b, a % b);
}

int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    cout << LCM(a, b);
    return 0;
}