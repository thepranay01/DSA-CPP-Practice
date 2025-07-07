#include <bits/stdc++.h>
using namespace std;

void Hanoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move Disc 1 from " << A << " to " << C << endl;
        return;
    }
    Hanoi(n - 1, A, C, B);
    cout << "Moves " << n << " from " << A << " to " << C << endl;
    Hanoi(n - 1, B, A, C);
}

int main()
{
    int n;
    cin >> n;

    Hanoi(n, 'A', 'B', 'C');
    return 0;
}