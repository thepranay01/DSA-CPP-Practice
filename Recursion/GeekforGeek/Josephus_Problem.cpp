#include <bits/stdc++.h>
using namespace std;

/*
I/P: n = 7, K = 3
O/P: 3

I/P: n = 8, K = 2
O/P: 0
*/
int Jp(int n, int k)
{
    if (n == 1)
        return 0;
    return (k + Jp(n - 1, k)) % n;
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;

    cout << "Survived: " << Jp(n, k);

    return 0;
}