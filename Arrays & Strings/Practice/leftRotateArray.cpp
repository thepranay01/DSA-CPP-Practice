#include <bits/stdc++.h>
using namespace std;

// Left Rotate
void RotateArray(int nums[], int n)
{
    int save = nums[0];
    for (int i = 0; i < n - 1; i++)
    {
        nums[i] = nums[i + 1];
    }
    nums[n - 1] = save;
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
        RotateArray(arr, n);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}