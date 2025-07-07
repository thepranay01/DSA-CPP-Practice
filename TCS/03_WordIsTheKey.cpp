/*

One programming language has the following keywords that cannot be used as identifiers: break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var Write a program to find if the given word is a keyword or not

Input #1: defer
Output: defer is a keyword

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string arr[] = {
        "break",
        "case",
        "continue",
        "default",
        "defer",
        "else",
        "for",
        "func",
        "goto",
        "if",
        "map",
        "range",
        "return",
        "struct",
        "type",
        "var",
    };

    int i;
    for (i = 0; i < 16; i++)
    {
        if (s == arr[i])
        {
            cout << s << " is a keyword";
            break;
        }
    }

    if (i == 16)
    {
        cout << s << " is not a keyword";
    }

    return 0;
}