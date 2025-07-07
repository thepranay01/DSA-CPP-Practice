/*
Given a maximum of four digits to the base 17(10 -> A, 11 -> B, 12 -> C, 16 -> G) as input, output its decimal value.
Input: 23GF


*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> mp;

    mp['A'] = 10;
    mp['B'] = 11;
    mp['C'] = 12;
    mp['D'] = 13;
    mp['E'] = 14;
    mp['F'] = 15;
    mp['G'] = 16;

    int ans = 0;
    int mul = 1;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (mp.find(s[i]) != mp.end())
        {
            ans += mp[s[i]] * mul;
        }
        else
        {
            ans += (s[i] - 48) * mul;
        }
        mul = mul * 17;
    }
    cout << ans;

    return 0;
}