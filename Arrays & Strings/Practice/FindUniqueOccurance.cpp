#include <bits/stdc++.h>
using namespace std;
/* o(n) space and time complxity */

// int UniqueOccurance(vector<int> ans, int size)
// {
//     int unique = (size + 1) / 3;
//     int array[unique + 1] = {0};
//     for (int i = 0; i < size; i++)
//     {
//         int ele = ans[i];
//         array[ele]++;
//     }
//     for (int i = 0; i < unique + 1; i++)
//     {
//         if (array[i] == 2)
//         {
//             return i;
//         }
//     }
//     return 0;
// }

/* Constant space best o(n) complexity*/

int UniqueOccurance(vector<int> input, int size)
{
    int unique = (size + 1) / 3;
    int exor = 0;
    for (int i = 0; i < size; i++)
    {
        exor = exor ^ input[i];
    }
    for (int i = 0; i <= unique; i++)
    {
        exor = exor ^ i;
    }
    return exor;
}

/* Main Function */
int main()
{
    int n;
    cin >> n;

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        ans.push_back(inp);
    }
    cout << UniqueOccurance(ans, n);

    return 0;
}