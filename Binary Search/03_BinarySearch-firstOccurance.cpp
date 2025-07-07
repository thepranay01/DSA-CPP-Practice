#include <bits/stdc++.h>
using namespace std;
int FirstOcc(int n, vector<int> nums, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] > target)
            high = mid - 1;
        
        else if(nums[mid] < target) low = mid + 1;

        else
        {
            if (mid == 0 || nums[mid - 1] != nums[mid])
                return mid;
            else
                high = mid;
        }
    }
    return -1;
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

    int k;
    cin >> k;

    int m = FirstOcc(n, nums, k);
    cout << "First Occurance of " << k << " is at: " << m;

    return 0;
}