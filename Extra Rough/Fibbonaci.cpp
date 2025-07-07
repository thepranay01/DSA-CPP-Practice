#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 1;
    if (n == 1)
    {
        sum = 0;
    }
    
    int a = 0;
    int b = 1;
    int temp;
    for (int i = 3; i <= n; i++)
    {
        temp = b;
        b = a + b;
        a = temp;
        sum += b;
    }
    cout << sum;

    return 0;
}