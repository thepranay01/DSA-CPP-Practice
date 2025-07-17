#include <bits/stdc++.h>
using namespace std;
int DuplicateEle(int arr[], int n)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        sum += arr[i]; 
    }
    int ExpSum = sum - (maxi * (maxi + 1)) / 2;
    int extraSize = n - (maxi + 1);

    return (ExpSum / extraSize);
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

    cout << DuplicateEle(arr, n);

    return 0;
}