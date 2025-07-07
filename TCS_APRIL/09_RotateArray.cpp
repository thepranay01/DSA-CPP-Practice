/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.


Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]

*/

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{

    int n;
    cin >> n;

    vector<int> nums(n);
    // cout << "nums: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int k;
    // cout << "K: ";
    cin >> k;

    // for (; k >= 0; k--)
    // {
    //     int ans = nums[nums.size() - 1];
    //     for (int i = nums.size() - 2; i >= 0; i--)
    //     {
    //         nums[i + 1] = nums[i];
    //     }
    //     nums[0] = ans;
    // }

    vector<int> copynums;
    copynums = nums;

    if (k % n == 0)
    {
        print(nums, n);
        return 0;
    }

    for (int i = 0; i < copynums.size(); i++)
    {
        nums[(i + k) % n] = copynums[i];
    }
    print(nums, n);
    return 0;
}
