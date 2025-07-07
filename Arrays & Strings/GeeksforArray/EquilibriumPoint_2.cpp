#include <bits/stdc++.h>
using namespace std;
bool isEquilibrium(vector<int> arr, int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        k += arr[i];
    }
    
    int leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        k -= arr[i];

        if (leftSum == k)
        {
            return true;
        }

        leftSum += arr[i];
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << isEquilibrium(arr, n);

    return 0;
}