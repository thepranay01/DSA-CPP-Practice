#include <bits/stdc++.h>
using namespace std;
vector<int> IntersectionArr(vector<int> nums1, vector<int> nums2, int n, int m)
{
    vector<int> ans;
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (nums1[i] < nums2[j])
        {
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            j++;
        }
        else
        {
            ans.push_back(nums1[i]);
            while (nums1[i] == nums1[i + 1] && i < n-1)
            {
                i++;
            }
            i++;
            j++;
        }
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

    vector<int> output = IntersectionArr(nums1, nums2, n, m);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}