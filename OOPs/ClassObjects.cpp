#include <bits/stdc++.h>
using namespace std;

class Student
{
    // properties
    char name[100];
    int roll;
    int age;
    char school[100];
};

int main()
{
    // creating objects Statically
    Student s1;

    s1.name = "Pranay";
    s1.roll = 5648;
    s1.age = 24;
    s1.school = "Chandigarh University";

    cout << s1.name << endl;
    cout << s1.rollNo << endl;
    cout << s1.age << endl;
    cout << s1.school << endl;

    // creating objects Dynamically
    Student *s2 = new Student;
    (*s2).name = "Tanya Singh";
    (*s2).roll = 26;
    (*s3).age = 22;
    (*s2).school = "MDDM";

    cout << (*s2).name << endl;
    cout << (*s2).rollNo << endl;
    cout << (*s2).age << endl;
    cout << (*s2).school << endl;
}