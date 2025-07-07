#include <bits/stdc++.h>
using namespace std;
int maxAppEle(vector<int> left, vector<int> right, int n)
{
    vector<int> ans(101, 0);
    for (int i = 0; i < n; i++)
    {
        ans[left[i]] += 1;
        ans[right[i] + 1] -= 1;
    }

    int maxi = INT_MIN;
    int idx = 0;

    for (int i = 1; i < 101; i++)
    {
        ans[i] += ans[i - 1];
        if (ans[i] > maxi)
        {
            maxi = ans[i];
            idx = i;
        }
    }
    return idx;
}

int main()
{
    int n;
    cin >> n;

    vector<int> left(n);
    // cout << "left[]: ";
    for (int i = 0; i < n; i++)
    {
        cin >> left[i];
    }

    vector<int> right(n);
    // cout << "right[]: ";
    for (int i = 0; i < n; i++)
    {
        cin >> right[i];
    }

    cout << maxAppEle(left, right, n);

    return 0;
}