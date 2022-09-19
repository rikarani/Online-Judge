// Source : https://open.kattis.com/problems/whichisgreater
#include <iostream>
// #include <string> // string manipulation
using namespace std;

int main()
{
    // deklarasi variable
    int a, b;

    // minta masukan dari user
    cin >> a >> b;

    // kalo a > b, print 1
    if (a > b)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}