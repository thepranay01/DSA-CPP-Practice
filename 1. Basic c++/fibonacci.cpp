#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 0;
    int b = 1;

    int i = 1;
    int c;
    while (i <= n)
    {
        if (i == 1)
        {
            c = 0;
        }
        else if (i == 2)
        {
            c = 1;
        }
        else
        {
            c = a + b;

            a = b;
            b = c;
        }

        i = i + 1;
        cout << c;
    }
    // cout << c;

    return 0;
}