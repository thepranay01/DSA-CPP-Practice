// given an array only add to sum when element is divisible by 3

#include <iostream>
using namespace std;

int isDiv(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (arr[0] % 3 == 0)
    {
        return arr[0] + isDiv(arr + 1, n - 1);
    }
    else
    {
        return isDiv(arr + 1, n - 1);
    }
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

    cout << isDiv(arr, n) << endl;

    return 0;
}
