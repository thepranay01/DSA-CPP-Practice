#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person()
    {
        cout << "Parent Constructor...\n";
    }
    ~Person()
    {
        cout << "Parent Destructor... \n";
    }
};

class Student : public Person
{
public:
    int rollno;

    Student()
    {
        cout << "Child Constructor..\n";
    }
    ~Student()
    {
        cout << "Child Destructor... \n";
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "roll no : " << rollno << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Pranay";
    s1.age = 22;
    s1.rollno = 5648;

    s1.getInfo();

    return 0;
}