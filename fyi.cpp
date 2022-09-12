// Source : https://open.kattis.com/problems/fyi
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // deklarasi variable
    string n;

    // minta inputan dari user
    cin >> n;

    // cek
    if (n.substr(0, 3) == "555")
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}