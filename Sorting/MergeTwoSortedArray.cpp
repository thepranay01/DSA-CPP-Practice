#include <bits/stdc++.h>
using namespace std;
vector<int> MergeTwo(vector<int> nums1, vector<int> nums2, int n, int m)
{
    vector<int> ans(n + m);
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (nums1[i] < nums2[j])
        {
            ans[i + j] = nums1[i];
            i++;
        }
        
        else
        {
            ans[i + j] = nums2[j];
            j++;
        }
    }
    for (i; i < n; i++)
    {
        ans[i + j] = nums1[i];
    }

    for (j; j < m; j++)
    {
        ans[i + j] = nums2[j];
    }

    return ans;
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> nums1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums1[i];
    }

    cin >> m;
    vector<int> nums2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> nums2[i];
    }

    vector<int> output = MergeTwo(nums1, nums2, n, m);
    for (int i = 0; i < n + m; i++)
    {
        cout << output[i]<<" ";
    }

    return 0;
}