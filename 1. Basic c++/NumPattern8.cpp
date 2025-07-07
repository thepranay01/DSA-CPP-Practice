/*

1
2 3
3 4 5
4 5 6 7

1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int count = i;

        for (int j = 1; j <= n; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }

    return 0;
}