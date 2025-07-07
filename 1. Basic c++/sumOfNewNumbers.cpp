#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 0;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        a = i + a;
        i++;
    }
    cout << a << endl;

    return 0;
}