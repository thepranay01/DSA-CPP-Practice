/*

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the (i)th line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return "the maximum amount of water a container can store".
Notice that you may not slant the container.

Example 1:
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int height[n];
    for (int i; i < n; i++)
    {
        cin >> height[i];
    }

    int i = 0;
    int j = n - 1;

    int store = INT_MIN;
    int area = 0;
    while (i < j)
    {
        area = min(height[i], height[j]) * (j - i);
        store = max(store, area);

        if (height[i] < height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << store;

    return 0;
}