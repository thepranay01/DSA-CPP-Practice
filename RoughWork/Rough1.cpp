#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    0 0 0 0
    0 0 0 4
    0 0 3 4
    0 2 3 4 
    */

    int n;
    cout << "n: " << endl;
    cin >> n;

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            arr[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


}

