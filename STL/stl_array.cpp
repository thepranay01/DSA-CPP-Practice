#include <iostream>
#include <array>

using namespace std;
int main()
{
    array<int, 4> arr = {1, 2, 3, 4};
    int size = arr.size();

    for (int i; i < size; i++)
    {
        cout << "the size of array is : " << arr[i] << endl;
    }
    cout << "Element at 2nd Index--> " << arr.at(2) << endl;
    cout << "Element at 2nd Index--> " << arr.empty() << endl;
    cout << "First Element --> " << arr.front() << endl;
    cout << "Last Element --> " << arr.back() << endl;
}