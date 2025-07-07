/*

Joseph is learning digital logic subject which will be for his next semester. He usually tries to solve unit assignment problems before the lecture. Today he got one tricky question. The problem statement is “A positive integer has been given as an input.

Convert decimal value to binary representation. Toggle all bits of it after the most significant bit including the most significant bit. Print the positive integer value after toggling all bits”.

Constrains- 1<=N<=100

Example 1:
Input : 10 -> Integer
Output : 5 -> result- Integer

Explanation: Binary representation of 10 is 1010. After toggling the bits(1010), will get 0101 which represents “5”. Hence output will print “5”.

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str ="";
    while (n)
    {
        int val=n&1;
        if (val)
        {
            str += "0";
        }
        else
            str += "1";
        n = n >> 1;
    }
    int ans = 0;
    for (int i = 0; i < str.length(); i++)
    {
        ans += pow(2, i) * (int(str[i]) - '0');
    }
    cout << ans;
    return 0;
}