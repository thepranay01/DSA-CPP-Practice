#include <bits/stdc++.h>
using namespace std;

// tc: 3^n, sc: n
int RopeCut(int n, int a, int b, int c, int k = 0)
{
    if (n == 0)
        return k;
    if (n < 0)
        return -1;

    int ans1 = RopeCut(n - a, a, b, c, k + 1);
    int ans2 = RopeCut(n - b, a, b, c, k + 1);
    int ans3 = RopeCut(n - c, a, b, c, k + 1);

    return max({ans1, ans2, ans3});
}

int main()
{
    int n, a, b, c;
    cout << "length of rope: ";
    cin >> n;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << RopeCut(n, a, b, c);
    return 0;
}