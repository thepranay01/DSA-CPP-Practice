#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    // simple approach
    // return (n * (n + 1)) / 2;

    // recurive approach

    // base case
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

// Tail recursion
int sumN(int n, int k = 0)
{
    if (n == 0)
        return k;
    return sumN(n - 1, n + k);
}

int main()
{
    int n;
    cin >> n;

    cout << sum(n);
    cout << endl;
    cout << sumN(n);
    return 0;
}