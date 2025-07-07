// Toggle ith bit
/*
input: 13
toggle 3rd bit

output: 15
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, T;
    cin >> n;
    cin >> T;

    int ans = 0;
    while (n)
    {
        ans = n ^ (1 >> T);
    }
    cout << ans;

    return 0;
}