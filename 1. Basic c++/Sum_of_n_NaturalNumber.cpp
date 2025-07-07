#include <bits/stdc++.h>
using namespace std;

// complexity = o(n)

// int findSum(int n)
// {
//     int sum = 0;
//     for (int i = n; i >= 0; i--)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << findSum(n);
//     return 0;
// }

// Complexity = 0(1)
int main()
{
    int n;
    cin >> n;
    cout << n * (n + 1) / 2;
}