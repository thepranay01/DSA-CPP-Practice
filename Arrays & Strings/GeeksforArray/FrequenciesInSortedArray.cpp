#include <bits/stdc++.h>
using namespace std;

// TC : O(n)
// SC : O(1)
void FreqArr(vector<int> nums, int n)
{
    int count = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i + 1] != nums[i])
        {
            cout << nums[i] << " " << count << endl;
            count = 1;
        }
        else
        {
            count++;
        }
    }
    cout << nums[n - 1] << " " << count;
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

    FreqArr(nums, n);
    return 0;
}