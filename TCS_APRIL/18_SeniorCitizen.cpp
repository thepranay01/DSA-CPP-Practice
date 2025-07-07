/*
You are given a 0-indexed array of strings details. Each element of details provides information about a given passenger compressed into a string of length 15. The system is such that:

1. The first ten characters consist of the phone number of passengers.
2. The next character denotes the gender of the person.
3. The following two characters are used to indicate the age of the person.
4. The last two characters determine the seat allotted to that person.

Return the number of passengers who are strictly more than 60 years old.

Example 1:
------------
Input: details = ["7868190130M7522","5303914400F9211","9273338290F4010"]
Output: 2
-----------------
Explanation: The passengers at indices 0, 1, and 2 have ages 75, 92, and 40. Thus, there are 2 people who are over 60 years old.
*/

#include <bits/stdc++.h>
using namespace std;

int countSeniors(vector<string> &details)
{
    int count = 0;
    for (int i = 0; i < details.size(); i++)
    {
        if (int(details[i][11]) > 54 && details[i][12] >= 0)
            count++;
        else if (int(details[i][11]) == 54 && int(details[i][12]) != 48)
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<string> det(n);
    for (int i = 0; i < n; i++)
    {
        cin >> det[i];
    }

    cout << countSeniors(det);
    return 0;
}