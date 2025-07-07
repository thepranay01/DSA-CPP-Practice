#include <bits/stdc++.h>
using namespace std;
bool isPart(vector<int> nums, int n)
{
    int tsum = 0;
    for (int i = 0; i < n; i++)
    {
        tsum += nums[i];
    }

    if (tsum % 3 == 0)
    {
        int k = tsum / 3;
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (sum == k)
            {
                sum = 0;
                count = count + 1;
            }
        }
        return count == 3;
    }
    else
        return false;
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

    cout << isPart(nums, n);
    return 0;
}