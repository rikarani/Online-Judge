// Source : https://open.kattis.com/problems/faktor
#include <iostream>
using namespace std;

int main()
{
    // deklarasi variable
    int A; // number of article you want to publish
    int I; // the impact factor the owners require
    int hasil = 0;

    // minta inputan dari user
    cin >> A >> I;

    hasil = A * (I - 1);

    cout << hasil + 1;

    return 0;
}