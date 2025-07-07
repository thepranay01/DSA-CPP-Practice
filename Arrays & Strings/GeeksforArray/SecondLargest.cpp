#include <bits/stdc++.h>
using namespace std;
int SecondLargest(vector<int> nums, int n){
    int l = INT_MIN;
    int s = INT_MIN;
    int e = -1;
    int k = -1;

    for(int i = 0; i<n; i++){
        if(nums[i] > l){
            s = l;
            k = e;
            l = nums[i];
        }

        else if(nums[i] > s &&  nums[i] != l){
            s = nums[i];
            k = i;
        }
    }
    return k;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << SecondLargest(nums, n);

    return 0;
}