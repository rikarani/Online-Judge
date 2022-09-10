// Source : https://open.kattis.com/problems/autori
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // deklarasi variable
    string nama;
    string singkatan;

    // minta inputan dari user
    cin >> nama;

    for (int i = 0; i < nama.length(); i++)
    {
        if (isupper(nama[i]))
        {
            singkatan += nama[i];
        }
    }

    cout << singkatan;

    return 0;
}