#include <bits/stdc++.h>
using namespace std;
int MajorityEle(vector<int> nums, int n)
{
    int count = 1;
    int ele = 0;
    for (int i = 1; i < n; i++)
    {
        if (count == 0)
        {
            ele = i;
            count = 1;
        }

        if (nums[i] == nums[ele])
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[ele])
        {
            c++;
        }
    }

    if (n / 2 < c)
    {
        return ele;
    }
    else
        return -1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int ans = MajorityEle(nums, n);
    if (ans != -1)
    {
        cout << "Index of Majority Element : " << ans;
    }
    else
    {
        cout << "No Majority Element";
    }
    return 0;
}