#include <bits/stdc++.h>
using namespace std;
bool Shiftfun(int n, int x)
{
    int s = (n >> x - 1) & 1;
    if (s != 0)
        return true;
    else
        return false;
}

int Shiftleft(int n, int x)
{
    int s = (1 << x - 1) & n;

    if (s != 0)
        return true;
    else
        return false;
}

int main()
{
    int num, x;
    cin >> num;
    cin >> x;

    cout << Shiftfun(num, x);
    cout << endl;
    cout << Shiftleft(num, x);

    return 0;
}