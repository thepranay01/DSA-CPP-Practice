// arr = [1,2,4,5,8]
// size = 5

#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    return isSorted(arr + 1, size - 1);
}

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // direct true false
    cout << isSorted(arr, size) << endl;

    // Printing if sorted or not
    if (isSorted(arr, size))
    {
        cout << "Array is Sorted";
    }
    else
    {
        cout << "Array is not Sorted";
    }

    return 0;
}