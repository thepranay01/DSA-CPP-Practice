/*

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.



Example 1:

Input: s = "anagram", t = "nagaram"
Output: true

Example 2:

Input: s = "rat", t = "car"
Output: false

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    for (int j = 0; j < t.size(); j++)
    {
        hash[t[j] - 'a']--;
    }
    for (int h = 0; h < 26; h++)
    {
        if (hash[h] != 0)
        {
            cout << false;
            return 0;
        }
    }
    cout << true;
    return 0;
}