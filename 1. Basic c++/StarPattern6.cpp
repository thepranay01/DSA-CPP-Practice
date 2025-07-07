/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "input : ";
    cin >> n;

    int i = n;
    while (i >= 1)
    {
        int j = 1;
        while (j <= n)
        {
            if (j >= i)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
            j = j + 1;
        }

        int k = n - 1;
        while (k >= 1)
        {
            if (i > k)
            {
                cout << "  ";
            }
            else
            {
                cout << " *";
            }

            k = k - 1;
        }

        cout << endl;
        i = i - 1;
    }

    return 0;
}