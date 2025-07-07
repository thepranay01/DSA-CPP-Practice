#include <bits/stdc++.h>
using namespace std;

bool ispresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][4], int row, int col)
{
    cout << "Printing the sum: " << endl;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

int main()
{
    // create 2D array
    int arr[3][4];

    // hard inputs
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    // 2D array row wise input
    cout << "Enter Your Elements: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // 2D array column wise input
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }

    cout << "Printing the array: " << endl;
    // 2D array Output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Finding element in 2D Array.
    cout << "Enter your Target" << endl;

    int target;
    cin >> target;

    if (ispresent(arr, target, 3, 4))
    {
        cout << "Target Found ";
    }
    else
    {
        cout << "Target Not Found";
    }

    // Findind Sum of rows
    printSum(arr, 3, 4);
    return 0;
}
