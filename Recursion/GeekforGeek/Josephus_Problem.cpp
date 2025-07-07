#include <bits/stdc++.h>
using namespace std;

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