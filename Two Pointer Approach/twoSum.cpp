#include <bits/stdc++.h>
using namespace std;
bool twoSum(vector<int> v, int n, int k)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (v[i] + v[j] > k)
        {
            j = j - 1;
        }
        else if (v[i] + v[j] < k)
        {
            i = i + 1;
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n, k;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> k;
    // return bool
    // v is sorted
    cout << twoSum(v, n, k);

    return 0;
}