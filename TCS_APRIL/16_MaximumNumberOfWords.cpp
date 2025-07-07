#include <bits/stdc++.h>
using namespace std;
int mostWordsFound(vector<string> &sentences)
{
    int n = sentences.size();
    int count = 0;
    int count2 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sentences[i].size(); j++)
        {
            if (sentences[i][j] == ' ')
            {
                count2++;
            }
        }
        count = max(count, count2);
        count2 = 1;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<string> sen(n);
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        sen[i] = s;
    }

    cout << mostWordsFound(sen);

    return 0;
}