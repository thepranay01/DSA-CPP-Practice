/*
Given an integer array "nums" and an integer "val", remove all occurrences of "val" in "nums" in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.

Return k.
*/
// Test Cases.....
/*
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
..............................................
..............................................
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, val;
        cin >> n;

        int nums[n];
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int val;
        cout << "Val : ";
        cin >> val;

        int i = 0, j = n - 1;
        while (i <= j)
        {

            if (nums[i] == val && nums[j] != val)
            {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }

            else if (nums[i] != val)
            {
                i++;
            }

            else if (nums[j] == val)
            {
                j--;
            }
        }

        for (int x = 0; x < i; x++)
        {
            cout << nums[x] << " ";
        }
    }

    // only if output is needed

    // int n;
    // cin >> n;

    // int nums[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> nums[i];
    // }
    // int val;
    // cin >> val;

    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (nums[i] != val)
    //     {
    //         cout << nums[i] << " ";
    //     }
    // }
}