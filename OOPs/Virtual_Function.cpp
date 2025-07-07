#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void getInfo()
    {
        cout << "Parent Class\n";
    }

    virtual void hello()
    {
        cout << "Hello from Parent \n";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "child class\n";
    }
    void hello()
    {
        cout << "Hello from Child \n";
    }
};

int main()
{
    Parent c1;
    // Child c1;
    c1.hello();
    return 0;
}