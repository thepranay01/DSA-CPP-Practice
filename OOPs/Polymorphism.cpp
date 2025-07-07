#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;

    Student()
    {
        cout << "non-parameterized\n";
    }

    Student(string name)
    {
        this->name;
        cout << "Parameterized\n";
    }
};

int main()
{
    // Student s1("Tony Stark");
    // use above or below this is constructor overloading
    Student s1();

    return 0;
}