#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    string store1 = s[0];
    string store2 = "";
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < s[i].size() && j < store1.size(); j++)
        {
            if (store1[j] == s[i][j])
            {
                store2 += store1[j];
            }
            else
            {
                break;
            }
        }
        store1 = store2;
        store2 = "";
    }

    cout << store1;
    return 0;
}