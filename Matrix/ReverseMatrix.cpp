#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int n >> m;

    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Reverse
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            swap();
        }
    }

    return 0;
}