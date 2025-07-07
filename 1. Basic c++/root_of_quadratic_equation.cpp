#include <bits/stdc++.h>
using namespace std;
int findRoots(int a, int b, int c)
{
    // calculate D
    int D = b * b - 4 * a * c;

    if (D > 0)
    {
        int root1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
        int root2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
    }

    else if (D = 0)
    {
        int root1, root2;
        root1 = root2 = -b / 2 * a;
    }

    else
    {
        int root1 = (-b / 2 * a) + ((sqrt(-(b * b - 4 * a * c)))) / 2 * a;
        int root2 = (-b / 2 * a) - ((sqrt(-(b * b - 4 * a * c)))) / 2 * a;
    }
}

int main()
{
    int a = 4;
    int b = 6;
    int c = 10;

    findRoots(a, b, c);
    return 0;
}