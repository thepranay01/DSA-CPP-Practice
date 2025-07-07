#include <bits/stdc++.h>
using namespace std;

int main()
{
    int office, construct, contract;
    int ans = 0;
    cin >> office >> construct >> contract;
    if ((construct < 0 && contract > 0) || (construct > 0 && contract < 0))
    {
        ans = 2 * (abs(contract)) + abs(office);
    }
    else if (abs(construct) < abs(contract))
    {
        ans = -1;
    }
    else
    {
        ans = abs(office);
    }
    cout << ans << endl;
    return 0;
}