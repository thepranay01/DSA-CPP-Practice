/*
input -> nums, Wsize , target

constent Window implementation

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

    int wsize, target;
    cin >> wsize;
    cin >> target;

    int l = 0;
    int r = wsize - 1;

    int sum = 0;
    for (int i = l; i <= r; i++)
    {
        sum += arr[i];
    }
    int maxsum = INT_MIN;

    while (r < n - 1)
    {
        sum = sum - arr[l];
        l++;
        r++;
        sum = sum + arr[r];
    }
    if (sum == target)
    {
        cout << true << endl;
        cout << l;
    }
    else
    {
        cout << false << endl;
        cout << -1 << endl;
    }
    return 0;
}