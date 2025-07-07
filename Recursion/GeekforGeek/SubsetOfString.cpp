#include <bits/stdc++.h>
using namespace std;

void SubSt(string s, string ans = "", int i = 0)
{
    if (i == s.length())
    {
        cout << ans << " ";
        return;
    }
    // INCLUSION
    SubSt(s, ans + s[i], i + 1);

    // EXCLUSION
    SubSt(s, ans, i + 1);
}

int main()
{
    string s;
    cin >> s;

    SubSt(s);
    return 0;
}