#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, r, n;
    cin >> a >> r >> n;

    int i = 1;
    while (i < n)
    {
        a = a * r;
        i++;
    }
    cout << a << endl;

    return 0;
}