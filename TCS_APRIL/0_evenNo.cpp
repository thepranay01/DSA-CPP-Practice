#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        if (e % 2 == 0)
        {
            cout << e << " ";
            count++;
        }
    }

    if (count == 0)
    {
        cout << "No Even Numbers";
    }
}