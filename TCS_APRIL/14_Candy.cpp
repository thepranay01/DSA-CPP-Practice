/*

There are n children standing in a line. Each child is assigned a ratings value given in the integer array ratings.
You are giving candies to these children subjected to the following requirements:

1. Each child must have at least one candy.
2. Children with a higher ratings get more candies than their neighbors.

Return the minimum number of candies you need to have to distribute the candies to the children.


Example 1:
Input: ratings = [1,0,2]
Output: 5

Example 2:
Input: ratings = [1,2,87,87,87,2,1]
Output: 13

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

        vector<int> ratings(n);

        for (int i = 0; i < n; i++)
        {
            cin >> ratings[i];
        }

        vector<int> ans(n, 1);

        int i = 1;
        while (i < n)
        {

            if (ratings[i] > ratings[i - 1])
            {
                ans[i] = ans[i - 1] + 1;
            }
            i++;
        }

        int sum = ans[i - 1];
        int j = i - 2;
        while (j >= 0)
        {

            if (ratings[j] > ratings[j + 1])
            {
                ans[j] = max(ans[j], ans[j + 1] + 1);
            }
            sum = sum + ans[j];
            j--;
        }

        cout << sum << endl;
    }
}