#include <bits/stdc++.h>
using namespace std;

class Teacher
{

    // Constructor creation
    // -> It has no return type
    // -> name same as class
public:
    // Non-Parametrised Constructor
    // Teacher()
    // {
    //     dept = "Computer Science";
    // }

    // Parameterised Constructor
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // copy Constructor
    Teacher(Teacher &orgobj) // Pass by reference
    {
        cout << "I am custom copy constructor" << endl;
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
        this->salary = orgobj.salary;
    }

    // Access Modifiers
private:
    double salary;

public:
    // Properties or Attributes
    int id;
    string name;
    string gender;
    string dept;
    string subject;

    // Methods or Member Function
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // Setter
    void setSalary(double s)
    {
        salary = s;
    }

    // Getter
    double getSalary()
    {
        return salary;
    }

    // for Parametrised constructor
    void getinfo()
    {
        cout << "name : " << name << endl;
        cout << "Subject : " << subject << endl;
    }
};

int main()
{
    // Teacher t1; // t1 is an object // Constructor call automatically by compiler when we write this

    // assinging using Dot operator
    // t1.id = 5648;
    // t1.name = "Pranay";
    // t1.gender = "Male";
    // t1.subject = "C++";
    // t1.setSalary(52000);

    // for Parametrised constructor
    Teacher t1("Pranay", "Computer Science", "Cpp", 52630);

    // copy constructor
    Teacher t2(t1); // default copy onstructor - invoked or called

    // Output :
    // cout << t1.id << endl;
    // cout << t1.name << endl;
    // cout << t1.gender << endl;
    // cout << t1.dept << endl;
    // cout << t1.subject << endl;
    // cout << t1.getSalary() << endl;

    // function output
    // t1.getinfo();
    t2.getinfo();

    return 0;
}