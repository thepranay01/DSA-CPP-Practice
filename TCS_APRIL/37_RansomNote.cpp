#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ransomNote, magazine;
    cout << "ransomNote : ";
    cin >> ransomNote;
    cout << "magazine : ";
    cin >> magazine;

    int arr[26] = {0};
    for (int i = 0; i < magazine.size(); i++)
    {
        arr[magazine[i] - 'a']++;
    }
    for (int i = 0; i < ransomNote.size(); i++)
    {
        if (--arr[ransomNote[i] - 'a'] < 0)
        {
            cout << false;
            break;
        }
    }
    cout << true;
}