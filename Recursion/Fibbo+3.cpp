#include <bits/stdc++.h>
using namespace std;
int fibbo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fibbo(n - 1) + fibbo(n - 2) + fibbo(n - 3);
}

int main()
{
    int n;
    cin >> n;

    cout << fibbo(n);

    return 0;
}