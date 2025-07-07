/*

Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.

Example 1:
--------------
Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
Output: true

Explanation:
--------------
word1 represents string "ab" + "c" -> "abc"
word2 represents string "a" + "bc" -> "abc"
The strings are the same, so return true.

*/

#include <bits/stdc++.h>
using namespace std;

bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
{
    int n = word1.size();
    int m = word2.size();

    string s = "";
    for (int i = 0; i < n; i++)
    {
        s = s + word1[i];
    }

    string k = "";
    for (int j = 0; j < m; j++)
    {
        k = k + word2[j];
    }
    return s == k;
}

int main()
{
    int n;
    cin >> n;
    vector<string> word1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> word1[i];
    }

    int m;
    cin >> m;
    vector<string> word2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> word2[i];
    }

    cout << arrayStringsAreEqual(word1, word2) << endl;

    return 0;
}