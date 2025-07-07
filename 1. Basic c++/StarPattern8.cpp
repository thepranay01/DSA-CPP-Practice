/*

  *
 ***
*****
 ***
  *

 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Input";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            if (i < j)
            {
                cout << "  ";
            }
            else
            {
                cout << " *";
            }
        }

        for (int k = 1; k <= n; k++)
        {
            if (i > k)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = n; k >= 1; k--)
        {
            if (i < k)
            {
                cout << "  ";
            }
            else
            {
                cout << " *";
            }
        }

        for (int j = 1; j <= n; j++)
        {
            if (i > j)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}