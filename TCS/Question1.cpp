/*

No.of students
Name of student
Age of Student
Gender of Student
Grade of Student

Print names of student if age is greater than 20
if Female print average grade of female

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string name[n];
    int age[n];
    string gender[n];
    char grade[n];

    for (int i = 0; i < n; i++)
    {
        cin >> name[i] >> age[i] >> gender[i] >> grade[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << name[i] << " ";
    //     cout << age[i] << " ";
    //     cout << gender[i] << " ";
    //     cout << grade[i] << endl;
    // }

    float avg = 0;
    int count = 0;

    // int A = 65;
    // int B = 66;
    // int C = 67;
    // int D = 68;
    // int E = 69;
    // int F = 70;

    for (int i = 0; i < n; i++)
    {

        if (age[i] > 20)
        {
            cout << name[i] << " ";
        }

        if (gender[i] == "Female" || gender[i] == "female" || gender[i] == "FEMALE")
        {
            avg = avg + grade[i];
            count++;
        }
    }
    cout << endl;

    if (count > 0)
    {
        avg /= count;
        cout << "Average grade of female students: " << avg << endl;
    }

    else
    {
        cout << "No female students found." << endl;
    }
    return 0;
}