// array should be sorted for binary Search

#include <bits/stdc++.h>
using namespace std;

// Function for printing step
void print(int arr[], int start, int end)
{
    for (int i = start; i < end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarys(int arr[], int start, int end, int k)
{
    // function for printing steps
    cout << endl;
    print(arr, start, end);
    // ----------------------------

    // base case
    if (start > end)
    {
        return -1;
    }

    // mid calculation
    int mid = start + (end - start) / 2;
    cout << "Here mid is : " << mid << endl;

    // Element Found
    if (arr[mid] == k)
    {
        return mid;
    }

    // When mid element is smaller than target
    if (arr[mid] < k)
    {
        return binarys(arr, mid + 1, end, k);
    }

    // When mid element is bigger than target
    else
    {
        return binarys(arr, start, mid - 1, k);
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
    int k;
    cin >> k;
    int start = 0;
    int end = n - 1;

    cout << binarys(arr, start, end, k);

    return 0;
}