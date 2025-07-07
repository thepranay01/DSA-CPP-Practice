/*

1
2 6
3 12 21
4 20 36 52

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a = i;
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a = a + (i * i);
        }
        cout << endl;
    }

    return 0;
}