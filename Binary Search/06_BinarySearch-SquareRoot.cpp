#include <bits/stdc++.h>
using namespace std;
void squarertFloor(int x)
{
    int low = 0;
    int high = x;
    int temp = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid * mid < x)
        {
            temp = mid;
            low = mid + 1;
        }
        else if (mid * mid > x)
        {
            high = mid - 1;
        }
        else
        {
            cout << mid;
            return;
        }
    }
    cout << temp;
    return;
}

int main()
{
    int x;
    cin >> x;

    squarertFloor(x);
    return 0;
}