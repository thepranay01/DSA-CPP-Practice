#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int k, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int SearchK(vector<int> arr, int x)
{
    if (arr[0] == x)
        return 0;
    int i = 1;
    while (arr[i] <= x)
    {
        if (arr[i] == x)
        {
            return i;
        }
        i = i * 2;
    }

    return binarySearch(arr, x, (i / 2) + 1, i - 1);
}

int main()
{
    vector<int> v;
    int i = 0;
    int k;

    do
    {
        cin >> k;
        v.push_back(k);

    } while (k != -1);

    int x;
    cin >> x;
    cout << SearchK(v, x);

    return 0;
}