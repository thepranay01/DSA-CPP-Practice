#include <bits/stdc++.h>
using namespace std;
void SecondMethod(vector<int> &nums, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[count]);
            count++;
        }
    }
}

void TZero(vector<int> &nums, int n)
{
    int i = 0;
    int j = i + 1;

    while (i < n && j < n)
    {
        if (nums[i] != 0)
        {
            i++;
            j = i + 1;
        }
        else if (nums[i] == 0 && nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
            j = i + 1;
        }

        else
        {
            j++;
        }
    }
}

int main()
{

    int n;
    cin >> n;

    // input sorted array only
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // TZero(nums, n);

    SecondMethod(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}