#include <bits/stdc++.h>
using namespace std;

void RightRotate(int nums[], int size)
{
    int save = nums[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        nums[i] = nums[i - 1];
    }
    nums[0] = save;
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
    for (int i = 0; i < k; i++)
    {
        RightRotate(arr, n);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}