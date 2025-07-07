#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    // Brute-Force

    int index = -1;
    int max_count = -1;

    for (int i = 0; i < n; i++)
    {
        int cotrow = 0;
        for (int j = 0; j < m; j++)
        {
            cotrow += mat[i][j];
        }
        if (cotrow > max_count)
        {
            max_count = cotrow;
            index = i;
        }
    }

    cout << index << endl;

    // Binary Search

    return 0;
}