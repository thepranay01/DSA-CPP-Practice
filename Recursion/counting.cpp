// input : 5
// output : 1 2 3 4 5

#include <bits/stdc++.h>
using namespace std;
void count(int n)
{
    if (n == 0)
    {
        return;
    }
    count(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;

    count(n);
    return 0;
}