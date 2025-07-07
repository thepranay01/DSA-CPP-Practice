#include <bits/stdc++.h>
using namespace std;

int main()
{

    float a, n, d;
    cin >> a >> n >> d;

    float i = 1;
    // while (i <= n)
    while (i < n)
    {
        // cout << 1 / a << " ";
        a = a + d;
        i++;
    }
    cout << 1 / a << " ";

    return 0;
}