#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    double *cgpaPtr;

    Student(int id, string name, double cgpa)
    {
        this->id = id;
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj)
    {
        this->id = obj.id;
        this->name = obj.name;
        // shallow copy
        // this->cgpaPtr = cgpaPtr;

        // deep copy
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getinfo()
    {
        cout << "Student id : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1(5243, "Raj", 8.95);
    Student s2(s1);
    s1.getinfo();

    cout << endl;
    // de-reffrence
    *(s2.cgpaPtr) = 9.25;
    s2.name = "Priya";

    s2.getinfo();
    return 0;
}