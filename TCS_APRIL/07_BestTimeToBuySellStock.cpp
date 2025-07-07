/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.



Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int prices[n];
        for (int i = 0; i < n; i++)
        {
            cin >> prices[i];
        }

        // code 1 try Brute force Correct

        // int maxP = 0;
        // int minP = 0;

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i + 1; j <= n; j++)
        //     {
        //         cout << "i: " << i << " " << "j: " << j << endl;
        //         if (prices[i] < prices[j])
        //         {
        //             cout << "prices[i]: " << prices[i] << " " << "prices[j]: " << prices[j] << endl;
        //             minP = prices[j] - prices[i];
        //             cout << minP << endl;
        //         }
        //         if (maxP < minP)
        //         {
        //             cout << "MaxP: " << maxP << " " << "MinP: " << minP << endl;
        //             maxP = minP;
        //         }
        //     }
        // }
        // cout << maxP << endl;

        // code 2 Try Wrong

        // int mini = INT_MAX;
        // int index = 0;
        // int i = 0;

        // while (i < n)
        // {
        //     if (prices[i] < mini)
        //     {
        //         cout << i << " <-i in if C-> " << mini << endl;
        //         // cout << "i: " << i << endl;
        //         mini = prices[i];
        //         index = prices[mini];
        //         i++;
        //     }
        //     else
        //     {
        //         i++;
        //     }
        // }
        // cout << mini << " " << i << endl;
        // cout << index << endl;

        // code 3 try wrong

        // for (int i = 0; i < n; i++)
        // {
        //     cout << i << " <-i inloop C-> " << count << endl;
        //     if (prices[i] < mini)
        //     {
        //         cout << i << " <-i in if C-> " << count << endl;
        //         // cout << "i: " << i << endl;
        //         mini = prices[i];
        //         count++;
        //     }
        //     cout << i << " <-i after if C-> " << count - 1 << endl;
        // }

        // cout << "Maxi: " << maxi << " " << "Mini: " << mini << endl;
        // cout << mini << " " << i << endl;

        // code 4 try

        int buy = prices[0];
        int sell = prices[0];
        int profit = sell - buy;

        int i = 0;
        while (i < n)
        {
            if (buy > prices[i])
            {
                buy = prices[i];
                sell = prices[i];
            }
            else if (prices[i] > sell)
            {
                sell = prices[i];
                profit = max(profit, sell - buy);
            }
            i++;
        }
        cout << profit << endl;
    }

    return 0;
}