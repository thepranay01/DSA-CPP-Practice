// Optimal
#include <bits/stdc++.h>
using namespace std;

int trapRainWaterOptimal(vector<int> v)
{
    int n = v.size(), ans = 0;
    int l = 0, r = n - 1;
    int l_max = 0, r_max = 0;
    
    while (l < r)
    {
        if (v[l] < v[r])
        {
            if (v[l] > l_max)
                l_max = v[l];
            else
                ans += (l_max - v[l]);
            l++;
        }
        else
        {
            if (v[r] > r_max)
                r_max = v[r];
            else
                ans += (r_max - v[r]);
            r--;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << trapRainWaterOptimal(arr);

    return 0;
}