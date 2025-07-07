/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int i;
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}