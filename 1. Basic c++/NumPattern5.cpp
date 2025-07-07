/*

1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}