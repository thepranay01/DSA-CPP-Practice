#include <bits/stdc++.h>
using namespace std;
int searchRotate(vector<int> v, int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (v[mid] == target)
        {
            return mid;
        }

        // left sorted
        if (v[low] <= v[mid])
        {
            if (v[low] <= target && target <= v[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        // right sorted
        else
        {
            if (v[mid] <= target && target <= v[high])
            {
                low = mid + 1;
            }
            
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;

    cout << searchRotate(v, n, k);

    return 0;
}