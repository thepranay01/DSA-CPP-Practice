/*

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".



Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string strs[n];
        for (int i = 0; i < n; i++)
        {
            cin >> strs[i];
        }

        string ans = strs[0];
        string ans2 = "";
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < strs[i].size() && j < ans.size(); j++)
            {
                // cout << "j: " << j << endl;
                if (ans[j] == strs[i][j])
                {
                    // cout << "if j: " << j << endl;
                    ans2.push_back(ans[j]);
                    // cout << "if ans2 : " << ans2 << endl;
                }
                else
                {
                    break;
                }
            }

            ans = ans2;
            ans2 = "";
        }
        cout << ans << endl;
    }
}