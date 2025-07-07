#include <bits/stdc++.h>
using namespace std;

int consOnes(vector<int> nums, int n)
{
    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 1)
        {
            maxCount = max(maxCount, count);
            count = 0;
        }
        else
            count++;
    }
    maxCount = max(count, maxCount);
    return maxCount;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << consOnes(arr, n);

    return 0;
}