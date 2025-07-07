#include <bits/stdc++.h>
using namespace std;

// Not a Tail recursive
void fun1(int n)
{
    if (n == 0)
        return;

    fun1(n - 1);
    cout << n << " ";
}

// Tail recursive
void fun2(int n, int k = 1)
{
    if (n == 0)
        return;
    cout << k << " ";
    fun2(n - 1, k + 1);
}

// Not a Tail recursive
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

// Tail recursive
int fact2(int n, int k = 1)
{
    if (n == 0 || n == 1)
        return k;

    return fact2(n - 1, k * n);
}

int main()
{
    int n;
    cin >> n;

    // fun1(n);
    // cout << endl;
    // fun2(n);
    // cout << endl;
    cout << fact(n);
    cout << endl;
    cout << fact2(n);

    return 0;
}