#include <bits/stdc++.h>
using namespace std;

// Removing x from string
void removeX(char s[])
{
    if (s[0] == '\0')
        return;

    if (s[0] != 'x')
    {
        removeX(s + 1);
    }
    else
    {
        int i = 1;
        for (; s[i] != '\0'; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        removeX(s);
    }
}

// Finding length
int length(char s[])
{
    if (s[0] == '\0')
    {
        return 0;
    }
    int StrLen = length(s + 1);
    return StrLen + 1;
}

int main()
{
    char str[100];
    cin >> str;

    removeX(str);
    cout << str << endl;

    cout << "size: " << length(str);

    return 0;
}