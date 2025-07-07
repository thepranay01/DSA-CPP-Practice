#include <bits/stdc++.h>
using namespace std;

// Static keyword in Function
// void fun()
// {
//     static int x = 0; // initalisation statement will run only one time
//     cout << "x : " << x << endl;
//     x++;
// };

// Static keyword in Class
class A
{
public:
    int x;

    void incX()
    {
        x = x + 1;
    }
};

int main()
{
    // Calling Function
    // fun();
    // fun();

    // Calling Class
    A obj1;
    A obj2;

    obj1.x = 100;
    obj2.x = 200;

    cout << "obj1 : " << obj1.x << endl;
    cout << "obj2 : " << obj2.x << endl;
    return 0;
}