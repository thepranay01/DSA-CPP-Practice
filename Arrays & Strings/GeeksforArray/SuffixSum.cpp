#include <bits/stdc++.h>
using namespace std;

void sufFix(vector<int> &nums)
{
    int n = nums.size();
    for (int i = n - 2; i >= 0; i--)
    {
        nums[i] += nums[i + 1];
    }
    return;
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

    sufFix(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}