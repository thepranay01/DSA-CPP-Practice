#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;

    unordered_map<char, char> mpp, mpp2;
    for (int i = 0; i < s.size(); i++)
    {
        if (mpp[s[i]] && mpp[s[i]] != t[i] || mpp2[t[i]] && mpp2[t[i]] != s[i])
        {
            return false;
        }
        
        mpp[s[i]] = t[i];
        mpp2[t[i]] = s[i];
    }
    cout << true;
}