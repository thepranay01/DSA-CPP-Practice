#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    while (1)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        v.push_back(n);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}