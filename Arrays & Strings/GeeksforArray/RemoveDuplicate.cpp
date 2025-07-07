#include <bits/stdc++.h>
using namespace std;
int RemoveDuplicate(vector<int> &nums, int n)
{
    int j = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] != nums[i])
        {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main()
{
    int n;
    cin >> n;

    // input sorted array only
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int rh = RemoveDuplicate(nums, n);
    for (int i = 0; i < rh; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}