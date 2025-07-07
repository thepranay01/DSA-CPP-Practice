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

    int target;
    cin >> target;

    int sum = matrix[0][0];
    int l = 0;
    int r = 0;
    while (r < (m * n))
    {
        if (sum < target && r < (n * m) - 1)
        {
            r = r + 1;
            sum = sum + matrix[r / m][r % m];
        }
        else if (sum > target)
        {
            sum = sum - matrix[l / m][l % m];
            l++;
        }
        else
        {
            break;
        }
    }

    if (sum == target)
    {
        cout << "True" << endl;
        for (int i = l; i <= r; i++)
        {
            // index Print
            cout << i / m << "," << i % m << endl;
            // elements print
            cout << matrix[i / m][i % m] << endl;
        }
        // starting element
        cout << l / m << "," << l % m;
    }
    else
    {
        cout << "False";
    }

    return 0;
}