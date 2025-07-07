#include <bits/stdc++.h>
using namespace std;
int fibbo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibbo(n - 1) + fibbo(n - 2);
}
int main()
{
    int n;
    cin >> n;

    // for nth term
    // cout << fibbo(n);

    for (int i = 0; i < n; i++)
    {
        cout << fibbo(i) << ",";
    }

    return 0;
}