/*
1
1 3
1 4 7
1 5 9 13

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, a = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a = a + i;
        }
        cout << endl;
    }

    return 0;
}