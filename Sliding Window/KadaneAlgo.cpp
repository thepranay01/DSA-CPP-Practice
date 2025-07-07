// Maximum Subarray Sum;
/*
input
---------
n = 8
arr = [-2 -3 4 -1 -2 1 5 -3]

output: 7

*/
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

    long long sum = 0;
    long long maxi = LONG_MIN;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxi;

    return 0;
}
