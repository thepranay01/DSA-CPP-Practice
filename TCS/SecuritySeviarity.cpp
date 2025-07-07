// parameter of seviarity is {0,1,2}
// seized items are thrown in a box(array)
// arrange that based on seviarity -> 0 1 2

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

    int i = 0;
    int j = n - 1;
    int k = 0;

    while (k <= j)
    {
        if (nums[k] == 0)
        {
            swap(nums[i], nums[k]);
            i++;
            k++;
        }
        else if (nums[k] == 2)
        {
            swap(nums[k], nums[j]);
            j--;
        }
        else
        {
            k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}