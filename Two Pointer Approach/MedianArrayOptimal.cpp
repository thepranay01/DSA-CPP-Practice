#include <bits/stdc++.h>
using namespace std;

// time complexity - O(log n1)
// space complexity - O(1)
float medianOfTwoArr(vector<int> &v1, vector<int> &v2)
{
    if (v1.size() > v2.size())
        return medianOfTwoArr(v2, v1);

    int n1 = v1.size(), n2 = v2.size();
    int low = 0, high = n1;

    while (low <= high)
    {
        int cut1 = (low + high) / 2;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;

        int leftMax1 = (cut1 == 0) ? INT_MIN : v1[cut1 - 1]; // largest element in left arr1
        int leftMax2 = (cut2 == 0) ? INT_MIN : v2[cut2 - 1]; // largest element in left arr2
        int rightMin1 = (cut1 == n1) ? INT_MAX : v1[cut1];   // smallest element in left arr1
        int rightMin2 = (cut2 == n2) ? INT_MAX : v2[cut2];   // smallest element in left arr2

        if (leftMax1 <= rightMin2 && leftMax2 <= rightMin1)
        {
            if ((n1 + n2) % 2 == 0)
                return (max(leftMax1, leftMax2) + min(rightMin1, rightMin2)) / 2.0;
            else
                return max(leftMax1, leftMax2);
        }
        else if (leftMax1 > rightMin2)
        {
            high = cut1 - 1;
        }
        else
        {
            low = cut1 + 1;
        }
    }
    return 0.0;
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec1[i];
    }
    int m;
    cin >> m;
    vector<int> vec2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> vec2[i];
    }

    cout << medianOfTwoArr(vec1, vec2) << endl;

    return 0;
}