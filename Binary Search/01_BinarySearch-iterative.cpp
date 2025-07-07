#include<bits/stdc++.h>
using namespace std;

// TC: O(log n)
// SC : O(1)
int SearchElement(int n, vector<int> nums, int target){
    int low = 0;
    int high = n-1;
    

    while (low<=high)
    {
        int mid = (low+high)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid]<target){
            low = mid +1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
 
int main()
{
    int size;
    cin>> size;

    vector<int> nums(size);
    for(int i = 0; i<size; i++){
        cin >> nums[i];
    }

    int k;
    cin>> k;

    cout << SearchElement(size, nums, k);
 
    return 0;
}