#include <bits/stdc++.h>
using namespace std;

// Tail recursive - Tc : O(n^2), SC: O(n^2)
bool Pa(string s, string k = "", int i = 0)
{
    // cout << i << endl;
    // cout << s << endl;
    // cout << k << endl;
    if (s.length() == k.length())
    {
        return s == k;
    }

    return Pa(s, s[i] + k, i + 1);
}

// Tail recursive : better approach -> TC: O(n), SC: O(n)
bool palin(string s, int end, int start = 0)
{
    if (start >= end)
        return true;
    if (s[start] != s[end])
    {
        return false;
    }
    return palin(s, end - 1, start + 1);
}

int main()
{
    string s;
    cin >> s;

    // Function 01
    cout << Pa(s);
    cout << endl;
    // Function 02
    cout << palin(s, s.length() - 1);
    return 0;
}