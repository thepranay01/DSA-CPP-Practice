#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int l = 0;
    int r = 0;
    int sum = arr[0];
    int minleng = INT_MAX;

    while (r < n && l < n - 1)
    {
        if (sum < 0)
        {
            sum = 0;
            r = r + 1;
            l = r;
            sum += arr[r];
        }

        else if (sum == k)
        {
            minleng = min(minleng, r - l + 1);
            r = r + 1;
            sum += arr[r];
            sum -= arr[l];
            l = l + 1;
        }

        else if (sum < k && r < n - 1)
        {
            r = r + 1;
            sum += arr[r];
        }
        else if (sum > k)
        {
            sum -= arr[l];
            l = l + 1;
        }
        else
        {
            break;
        }
    }
    cout << minleng;

    return 0;
}
