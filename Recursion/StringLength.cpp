#include <iostream>
using namespace std;

int length(char s[])
{
    if (s[0] == '\0')
    {
        return 0;
    }
    int smallStrLeg = length(s + 1);
    return smallStrLeg + 1;
}

int main()
{
    char str[100];
    cin >> str;

    int l = length(str);
    cout << l << endl;

    return 0;
}