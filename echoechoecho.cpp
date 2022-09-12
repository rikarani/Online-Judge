// Source : https://open.kattis.com/problems/echoechoecho
#include <iostream>
using namespace std;

int main()
{
    // deklarasi variable
    string kalimat;

    // minta inputan dari user
    cin >> kalimat;

    // cetak dengan perulangan
    for (int i = 1; i <= 3; i++)
    {
        cout << kalimat << " ";
    }

    return 0;
}