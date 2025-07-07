#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int Diagonalsum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (i == j)
            {
                Diagonalsum += matrix[i][j];
            }

            if ((i + j) == m - 1)
            {
                Diagonalsum += matrix[i][j];
            }
        }
    }

    cout << Diagonalsum << endl;

    return 0;
}