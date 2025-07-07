#include<bits/stdc++.h>
using namespace std;
int SearchElement(int n, vector<int> arr, int target){
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low+high) / 2;

        if(arr[mid]< target){
            low = mid + 1;
        }
        else if(arr[mid] > target){
            high = mid -1;
        }
        else {
            if(mid == n-1 || arr[mid] != arr[mid+1]) return mid;
            else low = mid+1;
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

    int m = SearchElement(size, nums, k);
    cout << "Last Occurance is at: "<< m;
 
    return 0;
}