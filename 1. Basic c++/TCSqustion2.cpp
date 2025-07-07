/*
input:
pleasesaveme

output:
psv lee esm aae

p l e a
s e s a
v e m e

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    vector<string> mat;
    string temp = "";
    
    for (int i = 0; i < str.length(); i++)
    {
        if (temp.length() == 4)
        {
            mat.push_back(temp);
            temp = "";
        }
        temp.push_back(str[i]);
    }
    mat.push_back(temp);

    string ans = "";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < mat.size(); j++)
        {
            string comm = mat[j];
            ans.push_back(comm[i]);
        }
        ans.push_back(' ');
    }

    cout << ans << endl;

    return 0;
}