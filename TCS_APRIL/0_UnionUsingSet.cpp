#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    set<int> s;
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        s.insert(element);
    }

    int k;
    cout << "Enter the number of additional elements: ";
    cin >> k;

    cout << "Enter " << k << " additional elements:" << endl;
    for (int i = 0; i < k; i++)
    {
        int element;
        cin >> element;
        s.insert(element);
    }

    cout << "Elements in the set:" << endl;
    for (int i : s)
    {
        cout << i << " ";
    }

    return 0;
}
