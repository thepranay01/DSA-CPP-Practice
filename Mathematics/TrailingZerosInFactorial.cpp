#include <bits/stdc++.h>
using namespace std;
int Trailing(int n)
{
    int ans = 0;
    while (n > 4)
    {
        ans += n / 5;
        n = n / 5;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << Trailing(n);

    return 0;
}