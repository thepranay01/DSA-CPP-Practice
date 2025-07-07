#include <bits/stdc++.h>
using namespace std;
// TC: O(n)
vector<int> preFix(vector<int> arr, int n)
{
    vector<int> pre(n);
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = max(pre[i - 1], pre[i]);
    } 
    return pre;
}

vector<int> sufFix(vector<int> arr, int n)
{
    vector<int> suf(n);
    suf[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = max(suf[i + 1], suf[i]);
    }
    return suf;
}

int TrapRainWater(vector<int> arr, int n)
{
    int total = 0;
    vector<int> leftmax = preFix(arr, n);
    vector<int> rightmax = sufFix(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < leftmax[i] && arr[i] < rightmax[i])
        {
            total += min(leftmax[i], rightmax[i]) - arr[i];
        }
    }
    return total;
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
    cout << TrapRainWater(arr, n);

    return 0;
}