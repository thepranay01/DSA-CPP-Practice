/*

4 3 2 1
8 6 4 2
12 9 6 3
16 12 8 4

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}