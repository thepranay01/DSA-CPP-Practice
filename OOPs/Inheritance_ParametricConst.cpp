#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
        cout << "Parent Constructor..\n";
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

    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
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
    Student s1("Raj Anand", 21, 5666);

    s1.getInfo();

    return 0;
}
