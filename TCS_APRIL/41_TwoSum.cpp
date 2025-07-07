#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> target;

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int v = target - nums[i];
        if (mp.find(v) != mp.end())
        {
            cout << i << "," << mp[v];
        }
        mp[nums[i]] = i;
    }
}