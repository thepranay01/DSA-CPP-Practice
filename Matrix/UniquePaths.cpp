// Leetcode - 62. Unique Paths

#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n)
{
    int grid[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0)
            {
                grid[i][j] = 1;
            }
            else
            {
                grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
            }
        }
    }
    return grid[m - 1][n - 1];
}

int main()
{
    int m, n;
    cin >> m;
    cin >> n;

    cout << uniquePaths(m, n);
    return 0;
}