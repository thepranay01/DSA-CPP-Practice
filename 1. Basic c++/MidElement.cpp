#include <bits/stdc++.h>
using namespace std;

int midElement(int arr[], int size)
{
    if (size % 2 == 0)
    {
        return (arr[size / 2] + arr[(size / 2) - 1]) / 2;
    }
    return arr[size / 2];
}

int main()
{
    int n;
    cin >> n;

    int arr[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << midElement(arr, n);

    return 0;
}