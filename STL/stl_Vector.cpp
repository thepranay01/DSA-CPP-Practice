#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v;
    cout << "Capacity--> " << v.capacity() << endl;
    cout << "Size--> " << v.size() << endl;

    v.push_back(1);
    cout << "Capacity--> " << v.capacity() << endl;
    cout << "Size--> " << v.size() << endl;

    v.push_back(2);
    cout << "Capacity--> " << v.capacity() << endl;
    cout << "Size--> " << v.size() << endl;

    v.push_back(3);
    cout << "Capacity--> " << v.capacity() << endl;
    cout << "Size--> " << v.size() << endl;

    cout << "Element at 2nd Index: " << v.at(2) << endl;

    cout << "First Element --> " << v.front() << endl;
    cout << "Back Element --> " << v.back() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl << endl;

    cout << "Before clear capacity --> " << v.capacity() << endl;
    cout << "Before clear size -->  " << v.size() << endl;

    v.clear();
    cout << endl;

    cout << "after clear capacity --> " << v.capacity() << endl;
    cout << "after clear size --> " << v.size() << endl << endl;


}