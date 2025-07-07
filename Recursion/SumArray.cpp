// input : [3 2 5 1 6]
// output: 17

#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }

    return arr[0] + sum(arr + 1, size - 1);
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

    cout << sum(arr, size);

    return 0;
}