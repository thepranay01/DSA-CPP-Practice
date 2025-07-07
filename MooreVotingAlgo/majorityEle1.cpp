#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int count = 1;
    int element = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (element == nums[i])
        {
            count++;
        }
        else if (element != nums[i] && count != 0)
        {
            count--;
        }
        else
        {
            element = nums[i];
            count++;
        }
    }
    cout << element;
    return 0;
}