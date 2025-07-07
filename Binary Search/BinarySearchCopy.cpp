#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    // for long integer safegurd from integer overflow
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[8] = {2, 4, 6, 12, 18, 20, 26, 28};
    int odd[6] = {1, 3, 5, 7, 9, 15};

    int evenindex = binarySearch(even, 8, 18);
    cout << "the index of 18 is " << evenindex << endl;

    int oddindex = binarySearch(odd, 6, 15);
    cout << "the index of 15 is " << oddindex << endl;

    return 0;
}