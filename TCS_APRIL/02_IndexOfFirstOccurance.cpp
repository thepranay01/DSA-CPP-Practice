/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack,
or -1 if needle is not part of haystack.



Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.

Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.

*/

// used sliding window concept...

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string haystack, needle;
        cout << "Your haystack : ";
        cin >> haystack;
        cout << "needle : ";
        cin >> needle;

        int h = haystack.size();
        int e = needle.size();

        if (e > h)
        {
            cout << -1 << endl;
            return 0;
        }

        int i = 0;
        int j = e - 1;
        
        while (j < h)
        {
            string val = "";
            for (int k = i; k <= j; k++)
            {
                val.push_back(haystack[k]);
            }
            if (val == needle)
            {
                cout << i << endl;
                break;
            }
            i++;
            j++;
        }
        if (j == h)
        {
            cout << -1 << endl;
        }
    }
}