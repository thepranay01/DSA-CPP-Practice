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
    int target;
    cin >> target;

    int l = 0;
    int r = 0;

    int sum = arr[0];
    while (r < n - 1)
    {
        if (sum < target && r < n - 1)
        {
            r = r + 1;
            sum = sum + arr[r];
        }
        else if (sum > target)
        {
            sum = sum - arr[l];
            l = l + 1;
        }
        else
        {
            break;
        }
    }

    if (sum == target)
    {
        cout << "True";
    }

    else
    {
        cout << "False";
    }

    return 0;
}