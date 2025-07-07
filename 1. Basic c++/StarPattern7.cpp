/*

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Input :";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            if (i >= j)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int k = 1; k < i; k++)
        {
            cout << " *";
        }

        cout << endl;
    }

    return 0;
}