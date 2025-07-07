#include <bits/stdc++.h>
using namespace std;

void Poke(int &a, int &b)
{
    swap(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    Poke(a, b);
    cout << a << " " << b;

    return 0;
}