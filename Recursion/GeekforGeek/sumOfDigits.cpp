#include <bits/stdc++.h>
using namespace std;

int sumDigit(int n, int s = 0)
{
    if (n == 0)
        return s;

    return sumDigit(n / 10, s + n % 10);
}

int main()
{
    int n;
    cin >> n;

    cout << sumDigit(n);
    return 0;
}