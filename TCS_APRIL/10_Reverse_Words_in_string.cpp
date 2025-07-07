/*
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.



Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"

Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.

Example 3:

Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int i = s.size() - 1;
    int j = s.size() - 1;

    string r = "";
    while (j >= 0)
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
            r = r + s.substr(j, i - j + 1);
            j--;
        }

        else if (s[i] != ' ' && s[j] == ' ')
        {
            r = r + s.substr(j + 1, i - j);
            r = r + ' ';
            i = j;
        }
    }
    cout << r << endl;
}