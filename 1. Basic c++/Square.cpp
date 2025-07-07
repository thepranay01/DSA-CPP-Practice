#include <bits/stdc++.h>
using namespace std;

void square(int &a)
{
    a = (a * a);
}

int main()
{
    int a;
    cin >> a;

    square(a);
    cout << a;

    return 0;
}