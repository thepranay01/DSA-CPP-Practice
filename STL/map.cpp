#include <bits/stdc++.h>
using namespace std;

int main()
{
    // creation
    unordered_map<string, int> mp;

    // insertion (3 ways)

    // way 1
    pair<string, int> pair1 = make_pair("Pranay", 1);
    mp.insert(pair1);

    // way 2
    pair<string, int> pair2("Srishti", 2);
    mp.insert(pair2);

    // way 3 (My Favourite way)
    mp["Aman"] = 3;

    // Searching (2 ways)
    cout << mp["Pranay"] << endl;     // 1
    cout << mp.at("Srishti") << endl; // 2

    // size (1 way)
    cout << mp.size() << endl; // 3

    // To check if "Present (1) or not (0)"
    cout << mp.count("Aman") << endl;   // gives 1
    cout << mp.count("Manish") << endl; // gives 0

    // erase
    mp.erase("Pranay");
    cout << mp.size() << endl;

    // itreator
    unordered_map<string, int>::iterator it = mp.begin();

    while (it != mp.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }
    
    return 0;
}