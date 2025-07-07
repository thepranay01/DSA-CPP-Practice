#include <bits/stdc++.h>
using namespace std;
int countSetbit(int n)
{
    int count = 0;
    if ((n & 1) == 1)
        count++;
    while (n)
    {
        n = n >> 1;
        if (n & 1 == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << countSetbit(n);
    cout << countSetbit(n);

    return 0;
}