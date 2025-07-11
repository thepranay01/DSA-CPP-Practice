#include <bits/stdc++.h>
using namespace std;
bool tripletSum(vector<int> v, int n, int sum)
{
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            if (v[i] + v[j] + v[k] == sum)
            {
                return true;
            }
            else if (v[i] + v[j] + v[k] < sum)
            {
                j++;
            }
            else
            {
                k--;
            }
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
    cout << tripletSum(v, n, k);

    return 0;
}