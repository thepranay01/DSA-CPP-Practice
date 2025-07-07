#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int rollno;
};

class GradStudent : public Student
{
public:
    string college;
};

int main()
{
    GradStudent G1;
    G1.name = "Tony Stark";
    G1.age = 22;
    G1.rollno = 5656;
    G1.college = "Oxford University";

    cout << G1.name << endl;
    cout << G1.college << endl;

    return 0;
}
