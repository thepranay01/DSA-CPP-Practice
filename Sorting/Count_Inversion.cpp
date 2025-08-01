#include <bits/stdc++.h>
using namespace std;
int CountMerge(vector<int> &nums, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> Left(n1), Right(n2);
    for (int i = 0; i < n1; i++)
    {
        Left[i] = nums[l + i];
    }

    for (int j = 0; j < n2; j++)
    {
        Right[j] = nums[m + 1 + j];
    }

    int i = 0, j = 0;
    int k = l;
    int res = 0;

    while (i < n1 && j < n2)
    {
        if (Left[i] <= Right[j])
        {
            nums[k] = Left[i];
            i++;
        }

        else
        {
            nums[k] = Right[j];
            j++;
            res = res + (n1 - i);
        }
        k++;
    }

    while (i < n1)
    {
        nums[k] = Left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        nums[k] = Right[j];
        j++;
        k++;
    }
    return res;
}

int CountInv(vector<int> &nums, int l, int r)
{
    int res = 0;
    if (l < r)
    {
        int m = l + (r - l) / 2;
        res += CountInv(nums, l, m);
        res += CountInv(nums, m + 1, r);
        res += CountMerge(nums, l, m, r);
    }
    return res;
}

// Naive Approach
// int CountInversion(vector<int> nums, int n)
// {
//     // TC: O(n^2)
//     // SC:O(1)
//     int ans = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (nums[i] > nums[j])
//             {
//                 ans++;
//             }
//         }
//     }
//     return ans;
// }

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // cout << CountInversion(nums, n);
    cout << CountInv(nums, 0, n - 1);

    return 0;
}