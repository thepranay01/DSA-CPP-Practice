/*
Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.



Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.

Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);

        //     int i = 0;
        //     int j = 0;
        //     while (j < s.size())
        //     {
        //         if (s[j] != ' ')
        //         {
        //             j++;
        //         }
        //         else
        //         {
        //             i = j;
        //             j++;
        //         }
        //     }
        //     cout << (j - i - 1) << endl;
        // }

        int n = s.size() - 1;
        int i = n;
        int j = n;

        while (i >= 0 && j >= 0)
        {
            if (s[i] == ' ')
            {
                i--;
                j--;
            }
            else if (s[i] != ' ' && s[j] != ' ' && j != 0)
            {
                j--;
            }
            else if (s[i] != ' ' && j == 0)
            {
                cout << (i - j) + 1 << endl;
                break;
            }
            else
            {
                cout << i - j << endl;
                break;
            }
        }
    }
    return 0;
}