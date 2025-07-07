#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin>>N;

    while (N--)
    {
        int x,y,z;
        cin>>x>>y>>z;

        if ((y>x && y<z)||(y>z && y<x))
        {
            cout<<y<< endl;
        }
        else if ((x>y && x<z)||(x>z && x<y))
        {
            cout<<x<< endl;
        }
        else
        {
            cout<<z<<endl;
        }

    }
    



return 0;
 
}