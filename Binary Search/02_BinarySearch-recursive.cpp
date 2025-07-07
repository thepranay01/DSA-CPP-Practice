#include <bits/stdc++.h>
using namespace std;

// TC: O(log n)
// SC : O(log n)
int SearchElement(vector<int> nums, int low, int high, int target)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;

    if (nums[mid] == target)
        return mid;
    else if (nums[mid] < target)
        return SearchElement(nums, mid + 1, high, target);
    else
        return SearchElement(nums, low, mid - 1, target);
}

int main()
{
    int size;
    cin >> size;

    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    int k;
    cin >> k;

    cout << SearchElement(nums, 0, size - 1, k);
    return 0;
}