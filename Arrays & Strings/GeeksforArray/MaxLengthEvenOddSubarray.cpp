#include <bits/stdc++.h>
using namespace std;
int MaxLengthEvenOddSubarray(vector<int> arr, int n)
{
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] % 2 != arr[i] % 2)
        {
            count++;
        }
        else
            count = 1;
    }
    return count;
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

    cout << MaxLengthEvenOddSubarray(arr, n);
    return 0;
}