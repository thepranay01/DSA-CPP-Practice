#include <bits/stdc++.h>
using namespace std;
vector<int> preFix(vector<int> arr, int n)
{
    vector<int> pre(n);
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
        cout << pre[i] << " ";
    }
    cout << endl;
    return pre;
}

vector<int> sufFix(vector<int> arr, int n)
{
    vector<int> suf(n);
    suf[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = arr[i] + suf[i + 1];
        cout << suf[i] << " ";
    }
    cout << endl;
    return suf;
}

bool isEquilibrium(vector<int> arr, int n)
{
    vector<int> pre = preFix(arr, n);
    vector<int> suf = sufFix(arr, n);

    for (int i = 0; i < n; i++)
    {
        if (pre[i] == suf[i])
            return true;
    }
    return false;
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

    cout << isEquilibrium(arr, n);

    return 0;
}