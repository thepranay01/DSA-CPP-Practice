#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter the amount : ";
    cin >> a;

    switch (1)
    {
    case 1:
        cout << "Rs 100 notes :" << (a / 100) << endl;

    case 2:
        cout << "Rs 50 notes :" << (a % 100) / 50 << endl;

    case 3:
        cout << "Rs 20 notes :" << ((a % 100) % 50) / 20 << endl;

    case 4:
        cout << "Rs 1 notes :" << (((a % 100) % 50) % 20) / 1 << endl;
        break;

    default:
        cout << "Please, Enter a valid input" << endl;
    }

    return 0;
}