#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n <= 1)
        {
            cout << "0";
        }
        else
        {
            cout << (n * (n - 1)) / 2;
        }
    }
    return 0;
}