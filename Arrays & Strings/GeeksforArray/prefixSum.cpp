#include <bits/stdc++.h>
using namespace std;

void preFix(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        nums[i] += nums[i - 1];
    }
    return;
}

int getsum(vector<int> nums, int l, int r)
{
    return nums[r] - nums[l - 1]; +
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

    preFix(nums);
    // cout << getsum(nums, 0, 2) << " ";
    // cout << getsum(nums, 1, 3) << " ";
    cout << getsum(nums, 2, 5) << " ";

    // for (int i = 0; i < n; i++)
    // {
    //     cout << nums[i] << " ";
    // }

    return 0;
}