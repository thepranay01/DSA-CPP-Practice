#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    if (&a != &b)
    {
        a ^= b;
        b ^= a;
        a ^= b;
    }
}
int main()
{
    int x, y;
    cin >> x;
    cin >> y;

    cout << "Before swap x = " << x << " " << "Y =" << y << endl;
    swap(x, y);
    cout << "After swap x = " << x << " " << "Y = " << y;

    return 0;
}