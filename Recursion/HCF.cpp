/*
Approach
---------------

-> Checked whether any of the input is 0 then return sum of both numbers
-> If both input are equal return any of the two numbers
-> If num1 is greater than the num2 then Recursively call findHCF(num1 – num2, num2)
-> Else Recursively call findHCF(num1, num2-num1)

*/

#include <bits/stdc++.h>
using namespace std;

int hcf(int n, int k)
{
    if (n == 0 || k == 0)
    {
        return n + k;
    }
    if (n == k)
    {
        return n;
    }
    if (n > k)
    {
        return hcf(n - k, k);
    }
    else
    {
        return hcf(n, k - n);
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << hcf(n, k);
    return 0;
}