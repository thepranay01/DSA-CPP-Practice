// I/P : [1, 4, 20, 3, 10, 5]
// sum : 33
// O/P: Yes

#include <bits/stdc++.h>
using namespace std;

string SubarraySum(vector<int> nums, int n, int sum)
{
    int i = 0;
    int j = 0;

    int ans = 0;
    while (j < n && i < n)
    {
        if (ans < sum)
        {
            ans += nums[j];
            j = j + 1;
        }
        else if (ans > sum)
        {
            ans -= nums[i];
            i = i + 1;
        }
        else
            return "Yes";
    }
    return "No";
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

    int sum;
    cout << "sum: ";
    cin >> sum;

    cout << SubarraySum(nums, n, sum);
    return 0;
}