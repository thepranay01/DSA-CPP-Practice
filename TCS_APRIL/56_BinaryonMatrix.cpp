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

    int start = 0;
    int end = (m * n) - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (matrix[mid / m][mid % m] == target)
        {
            cout << true;
            return 0;
        }
        else if (matrix[mid / m][mid % m] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    cout << false;

    return 0;
}