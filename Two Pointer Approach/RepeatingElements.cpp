#include <bits/stdc++.h>
using namespace std;
// Second Optimal approach of Duplicate Element
int DuplicateEle(int arr[], int n)
{
    int slow = arr[0] + 1;
    int fast = arr[0] + 1;

    do
    {
        slow = arr[slow] + 1;
        fast = arr[arr[fast]] + 1;
    } while (slow != fast);

    slow = arr[0] + 1;
    while (slow != fast)
    {
        slow = arr[slow] + 1;
        fast = arr[fast] + 1;
    }
    return slow - 1;
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