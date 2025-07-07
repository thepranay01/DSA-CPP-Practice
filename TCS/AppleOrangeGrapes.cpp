/*
Q1: Input
sales_instructions = {(“Apple”,4.5,10), (“Mango”, 4, 8), (“Grape”, 3.5, 13)}

Output:
Total Sales: 122.5, Average Sales: 40.83, Best Product: Grape


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<string> fruit;
    vector<double> prices;
    vector<int> quantity;

    while (cin >> s)
    {
        double p;
        int q;
        cin >> p >> q;

        prices.push_back(p);
        quantity.push_back(q);
        fruit.push_back(s);
    }

    for (int i = 0; i < fruit.size(); i++)
    {
        cout << fruit[i] << " " << prices[i] << " " << quantity[i];
    }

    return 0;
}