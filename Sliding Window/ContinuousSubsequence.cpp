/*
There are N rooms in a Hotel and each roon has some gold coins and you have to enter in a room and exit from another or same room if K is eaqual to number of coins you have collected

n = 10
[5,3,7,14,18,1,18,4,3,8]
K = 15

output should be the least value of room and room number starts from 1;
1 3

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> roomst(vector<int> room, int k)
{
    int n = room.size() - 1;
    int l = 0;
    int r = 0;
    int sum = room[r];
    vector<int> store;
    if (n == 0)
    {
        cout << -1;
    }
    while (r < n && l < n - 1)
    {
        if (sum < k)
        {
            r = r + 1;
            sum += room[r];
        }
        if (sum > k)
        {
            sum -= room[l];
            l = l + 1;
        }
        if (sum == k)
        {
            store.push_back(l + 1);
            store.push_back(r + 1);
            return store;
        }
    }
    return store;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    vector<int> ans;
    ans = roomst(arr, k);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}