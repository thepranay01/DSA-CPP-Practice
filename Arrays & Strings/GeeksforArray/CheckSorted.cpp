#include <bits/stdc++.h>
using namespace std;
string CheckSorted(vector<int> nums, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            return "No";
        }
    }
    return "Yes";
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

    cout << CheckSorted(nums, n);

    return 0;
}