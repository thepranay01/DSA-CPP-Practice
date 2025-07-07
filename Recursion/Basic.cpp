#include <bits/stdc++.h>
using namespace std;

void welcome(int n)
{
    if (n == 0)
    {
        return;
    }
    welcome(n - 1); // Prints inorder
    cout << n << ". " << "Hello Recursion" << endl;
    // welcome(n - 1); // Prints reverse
}
int main()
{
    int n;
    cin >> n;
    welcome(n);

    return 0;
}