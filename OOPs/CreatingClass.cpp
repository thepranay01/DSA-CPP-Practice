// it is a user defined data type

#include <bits/stdc++.h>
using namespace std;

class Hero
{
    // properties
    char name[100];
    int health;
    char level;
};

int main()
{
    // creating a object
    Hero h1;

    cout << "Size : " << sizeof(h1) << endl;

    return 0;
}