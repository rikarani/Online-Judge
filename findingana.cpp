// Source : https://open.kattis.com/problems/findingana
#include <iostream>
#include <string> // string manipulation
using namespace std;

int main()
{
    // deklarasi variable
    string s;

    // minta inputan dari user
    cin >> s;

    // index awal
    int indexAwal = s.find("a");

    // ancrit apa
    cout << s.substr(indexAwal);

    return 0;
}