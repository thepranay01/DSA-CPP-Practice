#include <bits/stdc++.h>
using namespace std;

int minElement(int arr[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (mini > arr[i])
        {
            mini = arr[i];
        }
    }
    return mini;
}

int main()
{
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << minElement(arr, n) << endl;

    return 0;
}