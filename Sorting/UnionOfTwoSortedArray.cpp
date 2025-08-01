#include <bits/stdc++.h>
using namespace std;
vector<int> UnionArr(vector<int> a, vector<int> b, int n, int m)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            ans.push_back(a[i]);
            i++;
        }

        else if (b[j] < a[i])
        {
            ans.push_back(b[j]);
            j++;
        }

        else
        {
            ans.push_back(a[i]);
            while (a[i] == a[i + 1] && i < n - 1)
            {
                i++;
            }

            while (b[j] == b[j + 1] && j < m - 1)
            {
                j++;
            }
            i++;
            j++;
        }
    }
    while (i < n)
    {
        ans.push_back(a[i]);
        i++;
    }

    while (j < m)
    {
        ans.push_back(b[j]);
        j++;
    }

    return ans;
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<int> output = UnionArr(a, b, n, m);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}