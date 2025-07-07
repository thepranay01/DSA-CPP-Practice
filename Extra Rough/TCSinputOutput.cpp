#include <bits/stdc++.h>
using namespace std;

int main()
{
    // when input size is not given

    vector<int> arr;
    int num;

    while (cin >> num)
    {
        arr.push_back(num);
    }

    for (int n : arr)
    {
        cout << n << endl;
    }

    // input in space of string

    int t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        cout << s << endl;
    }
    

    // when space separated
    string s;
    double d;
    cin >> s;
    cin >> d;

    cout << s << endl;
    cout << d << endl;

    // when comma (,) seprated

    string s;
    cin >> s;

    int index = 0;
    while (s[index] != ',')
    {
        index++;
    }

    string chars = s.substr(0, index);
    string price = s.substr(index + 1, s.size() - 1);
    string Quantity = s.substr(index + 2, s.size() - index + 2);

    double val = stod(price);
    int qut = stod(Quantity);

    cout << chars << endl;
    cout << val + 1 << endl;
    cout << qut;
    return 0;
}