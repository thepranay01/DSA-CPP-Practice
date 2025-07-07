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

    // Destructor
    ~Student()
    {
        cout << "Hi I'm deleting everything";
        delete cgpaPtr; // use for issue -> memory leak
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
    s1.getinfo();
    return 0;
}