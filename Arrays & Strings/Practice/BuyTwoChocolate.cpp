#include <bits/stdc++.h>
using namespace std;

int buyChoco(vector<int> &prices, int money)
{
    int mini = INT_MAX;
    int sec_mini = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < mini)
        {
            sec_mini = mini;
            mini = prices[i];
        }
        else if (sec_mini > prices[i])
        {
            sec_mini = prices[i];
        }
    }
    // if ((mini+sec_mini) <= money){
    //     return money-(mini+sec_mini);
    // }
    // return money;

    // Ternary operator --> //return condition ? true:false
    return ((mini + sec_mini) <= money) ? money - (mini + sec_mini) : money;
}

int main()
{
    int n;
    cout << "Size of vector --> " << endl;
    cin >> n;

    vector<int> prices(n);

    cout << "elements of vector --> " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    cout << "Money --> " << endl;
    int money;
    cin >> money;

    cout << buyChoco(prices, money);

    return 0;
}