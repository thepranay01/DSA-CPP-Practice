#include <bits/stdc++.h>
using namespace std;
int ssum(int arr[], int n, int sum, int i = 0, int k = 0)
{
    if (k == sum)
        return 1;
    if (i == n)
        return 0;

    return ssum(arr, n, sum, i + 1, arr[i] + k) + ssum(arr, n, sum, i + 1, k);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;

    cout << ssum(arr, n, sum);

    return 0;
}