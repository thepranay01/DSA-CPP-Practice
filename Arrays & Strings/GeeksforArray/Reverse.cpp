#include <bits/stdc++.h>
using namespace std;

void rev(vector<int> &arr, int n)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        swap(nums[low], nums[high]);
        low++;
        high--;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    rev(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}