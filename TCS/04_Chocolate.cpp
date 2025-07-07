/*

A chocolate factory is packing chocolates into the packets. The chocolate packets here represent an array of N number of integer values.
The task is to find the empty packets(0) of chocolate and push it to the end of the conveyor belt(array).

Example 1 :

N=8 and arr = [4,5,0,1,9,0,5,0].
There are 3 empty packets in the given set.
These 3 empty packets represented as O should be pushed towards the end of the array

Input :
8 – Value of N
[4,5,0,1,9,0,5,0] – Element of arr[O] to arr[N-1],While input each element is separated by newline

Output: 4 5 1 9 5 0 0 0

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int arr2[n] = {0};
    int i = 0;
    int j = 0;

    while (i < n && j < n)
    {

        if (arr[i] != 0)
        {
            arr2[i] = arr[i];
            i++;
            j++;
        }

        else if (arr[i] == 0 && arr[j] != 0)
        {
            swap(arr[i], arr[j]);
        }

        else
        {
            j++;
        }
    }

    // Small code :

    // int n, j = 0;
    // cin >> n;
    // int a[n] = {0};

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[j];
    //     if (a[j] != 0)
    //     {
    //         j++;
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}