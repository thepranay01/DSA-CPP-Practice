#include <bits/stdc++.h>
using namespace std;

bool isPrime(int nums)
{
    if (nums == 1)
    {
        return false;
    }
    for (int i = 2; i <= nums - 1; i++)
    {
        if (nums % 2 == 0)
        {
            cout << "False" << endl;
            return 0;
        }
    }
    return true;
}

int main()
{
    // prime number

    // int n;
    // cin >> n;

    // int arr[n] = {0};
    // for (int i = 2; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         cout << i << " ";
    //         for (int j = i * i; j <= n; j = j + i)
    //         {
    //             arr[j] = 1;
    //         }
    //     }
    // }

    // multiple of a number without using multiply
    // int n;
    // cin >> n;

    // int u;
    // cout << "YOUR INPUT: ";
    // cin >> u;

    // for (int i = u * u; i <= n; i = i + u)
    // {
    //     cout << i << " ";
    // }

    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}