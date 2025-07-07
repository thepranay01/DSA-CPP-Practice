#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int val;
    cin >> val;

    int l = 0;
    int r = 0;
    int sum = 0;

    sum = sum + (s[r] - 'a' + 1);
    while (r < s.size())
    {
        if (sum > val)
        {
            sum = sum - (s[l] - 'a' + 1);
            l = l + 1;
            // cout << sum << " if 1 " << l << " -l- r - " << r << endl;
        }
        else if (sum < val && r < s.size() - 1)
        {
            r = r + 1;
            sum = sum + (s[r] - 'a' + 1);
            // cout << sum << " else if 2 " << l << " -l- r - " << r << endl;
        }
        else if (sum == val)
        {
            cout << s.substr(l, r - l + 1) << endl;
            sum = sum - (s[l] - 'a' + 1);
            l++;
            // cout << sum << " else if 3 " << l << " -l- r - " << r << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}