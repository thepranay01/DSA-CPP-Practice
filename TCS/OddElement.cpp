#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int ele;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>ele;
        temp = temp ^ ele;
    }
    cout << temp << " ";

    return 0;
}