#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, d, n;
    cin >> a >> d >> n;

    int i = 1;
    while (i <= n)
    {
        cout << a + d << " ";
        a = a + d;
        i++;
    }

    return 0;
}