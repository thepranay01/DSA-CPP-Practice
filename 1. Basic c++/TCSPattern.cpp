/*

Input:

1 2 3
4 5 6
7 8 9

output:

1 0 0
4 5 0
7 8 9

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i < j)
            {
                arr[i][j] = 0;
            }
            cout << arr[i][j];
        }

        cout << endl;
    }
    return 0;
}