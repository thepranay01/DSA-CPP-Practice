#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ap = n * (n + 1) / 2;
    for (int i = n; i >= 1; i--)
    {
        int mul = ap - n + 1;
        for (int j = 1; j <= i; j++)
        {
            cout << n * mul << " ";
            mul++;
        }
        ap = ap - (n - 1);
        cout << endl;
    }

    return 0;
}