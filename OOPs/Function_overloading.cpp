#include <bits/stdc++.h>
using namespace std;

class Print
{
public:
    void show(int x)
    {
        cout << "integer : " << x << endl;
    }

    void show(char ch)
    {
        cout << "char : " << ch << endl;
    }
};

int main()
{
    Print p1;
    // based on parameter our function will be executed
    p1.show(101);

    return 0;
}