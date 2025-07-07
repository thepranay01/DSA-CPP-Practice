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

    int Bsum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (i == 0 || j == 0)
            {
                Bsum += matrix[i][j];
            }

            else if (i == m - 1 || j == m - 1)
            {
                Bsum += matrix[i][j];
            }
        }
    }
    cout << Bsum << endl;

    return 0;
}