// Number of Employees T
// Number of working Days in a month N
// take p as present a as absent and count number of present days
// if the percetage of present days is 80% or above eligible for incentive

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N;
        char at;
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            cin >> at;
            if (at == 'p' || at == 'P')
                count++;
        }
        float is_eligible = float(count) / float(N);
        if (is_eligible * 100 >= 80)
        {
            cout << "employee is eligible" << endl;
        }
        else
        {
            cout << "employee is not eligible" << endl;
        }
    }

    return 0;
}