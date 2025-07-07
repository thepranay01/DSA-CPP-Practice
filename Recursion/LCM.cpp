#include <bits/stdc++.h>
using namespace std;
int HCF(int num1, int num2)
{

    if (num1 == num2)
    {
        return num1;
    }

    if (num1 == 0 || num2 == 0)
    {
        return num1 + num2;
    }

    if (num1 > num2)
    {
        return HCF(num1 - num2, num2);
    }

    else
    {
        return HCF(num1, num2 - num1);
    }
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int LCM = num1 * num2 / HCF(num1, num2);
    cout << LCM;

    return 0;
}