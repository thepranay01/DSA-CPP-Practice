#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &nums, int low, int high)
{
    while (low < high)
    {
        swap(nums[low], nums[high]);
        low++;
        high--;
    }
}

void RotateByD(vector<int> &nums, int n, int d)
{
    reverse(nums, 0, d - 1);
    reverse(nums, d, n - 1);
    reverse(nums, 0, n - 1);
}

int main()
{
    int n, d;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> d;

    RotateByD(nums, n, d);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << cout;
    }

    return 0;
}