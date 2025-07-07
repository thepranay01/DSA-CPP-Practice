#include <bits/stdc++.h>
using namespace std;
bool target(int arr[], int n, int k)
{
    if (n == 0)
    {
        return 0;
    }

    if (arr[0] == k)
    {
        return true;
    }
    
    else
    {
        return target(arr + 1, n - 1, k);
    }
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
    int k;
    cin >> k;

    cout << target(arr, n, k);

    return 0;
}