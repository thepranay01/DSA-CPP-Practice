#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void getInfo()
    {
        cout << "Parent Class\n";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "child class\n";
    }
};

int main()
{
    // Parent c1;
    Child c1;
    c1.getInfo();
    return 0;
}