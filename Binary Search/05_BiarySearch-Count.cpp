#include <bits/stdc++.h>
using namespace std;
int firstOcc(int n, vector<int> nums, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] > target)
            high = mid - 1;

        else if (nums[mid] < target)
            low = mid + 1;

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

int lastOcc(int n, vector<int> arr, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}

int ElementCount(int n, vector<int> nums, int x)
{
    int first = firstOcc(n, nums, x);
    if (first == -1)
        return 0;
    else
        return ((lastOcc(n, nums, x) - first) + 1);
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

    int m = ElementCount(size, nums, k);
    cout << "Total Count : " << m;

    return 0;
}