/*

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> nums(n);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int target;
        cout << "Target: ";
        cin >> target;

        int low = 0;
        int high = nums.size() - 1;
        int mid = (low + high) / 2;

        while (low <= high)
        {
            if (target == nums[mid])
            {
                cout << mid << endl;
                break;
            }
            else if (target > nums[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            mid = (low + high) / 2;
        }
        if (low > high)
        {
            if (target > nums[mid])
            {
                cout << mid + 1;
            }
            else
            {
                cout << mid;
            }
        }
    }
}