#include <bits/stdc++.h>
using namespace std;
void defangIPaddr(string address)
{
    string ans = "";
    for (int i = 0; i < address.size(); i++)
    {
        if (address[i] == '.')
        {
            ans += "[.]";
        }
        else
        {
            ans = ans + address[i];
        }
    }
    cout << ans;
}

int main()
{
    string address;
    cin >> address;

    defangIPaddr(address);
    return 0;
}