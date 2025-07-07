// Maximum Value of arr[j] - arr[i] such that j>i
#include <bits/stdc++.h>
using namespace std;
// T.C: O(n)
// S.C: O(1)
int maximumDiff(vector<int> nums, int n)
{
    int mini = INT_MAX;
    int diff = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        mini = min(mini, nums[i]);
        diff = max(diff, nums[i + 1] - mini);
    }
    return diff;
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

    cout << maximumDiff(nums, n) << endl;
    return 0;
}