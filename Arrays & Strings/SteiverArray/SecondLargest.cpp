#include <bits/stdc++.h>
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> arr)
{
    // Brute-Force

    // sort(arr.begin(), arr.end());

    // int largest = arr[n - 1];
    // int secondlongest = 0;
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     if (arr[i] != largest)
    //     {
    //         secondlongest = arr[i];
    //         break;
    //     }
    // }

    // int smallest = arr[0];
    // int secondsmall = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != smallest)
    //     {
    //         secondsmall = arr[i];
    //         break;
    //     }
    // }
    // vector<int> ans;
    // ans.push_back(secondlongest);
    // ans.push_back(secondsmall);
    // return ans;

    // Optimal
    int longest = arr[0];
    int secondlon = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > longest)
        {
            secondlon = longest;
            longest = arr[i];
        }
        else if (arr[i] > secondlon && arr[i] != longest)
        {
            secondlon = arr[i];
        }
    }

    int smallest = arr[0];
    int secondsmall = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondsmall = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondsmall && arr[i] != smallest)
        {
            secondsmall = arr[i];
        }
    }
    return {secondlon, secondsmall};
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    vector<int> result = getSecondOrderElements(n, arr);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}