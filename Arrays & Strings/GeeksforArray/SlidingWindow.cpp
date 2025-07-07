// constant Window
#include <bits/stdc++.h>
using namespace std;
int MaximumSum(vector<int> nums, int k)
{
    int n = nums.size();
    int sum = 0;
    int fsum = INT_MIN;

    int i = 0;
    int j = 0;

    while (j < n)
    {
        if (j - i < k)
        {
            sum += nums[j];
            j = j + 1;
        }

        else
        {
            fsum = max(fsum, sum);
            sum -= nums[i];
            i = i + 1;
        }
    }
    return fsum;
}

int main()
{
    int n, k;
    cout << "Size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "nums: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "Window Size: ";
    cin >> k;

    cout << MaximumSum(nums, k);

    return 0;
}