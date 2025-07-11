/*
Test case 1 :
v1[n] = 10 20 30 40 50
v2[m] = 5 15 25 35 45
*/
#include <bits/stdc++.h>
using namespace std;
float medianTwoArr(vector<int> v1, vector<int> v2, int n, int m)
{
    int count = (n + m) / 2;
    int i = 0; // 2
    int j = 0; // 3

    int ans1 = 0;
    int ans2 = 0;

    int tick = 0; // 5
    while (i < n && j < m && tick <= count)
    {
        cout << "ans 1: " << ans1 << endl;
        cout << "ans 2: " << ans2 << endl;
        ans2 = ans1;
        tick = tick + 1;
        if (v1[i] < v2[j])
        {
            ans1 = v1[i];
            i++;
        }
        else
        {
            ans1 = v2[j];
            j++;
        }
    }

    while (i == n && j < m && tick <= count)
    {
        tick++;
        ans2 = ans1;
        ans1 = v2[j];
        j++;
    }

    while (j == m && i < n && tick <= count)
    {
        tick++;
        ans2 = ans1;
        ans1 = v1[i];
        i++;
    }

    if ((m + n) % 2 == 0)
    {
        return (ans1 + ans2) / 2.0;
    }
    else
    {
        return ans1 / 1.0;
    }
}

int main()
{
    int n, m;

    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    cout << medianTwoArr(v1, v2, n, m);

    return 0;
}