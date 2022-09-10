// Source : https://open.kattis.com/problems/batterup
#include <iostream>
using namespace std;

int main()
{
    // deklarasi variable
    double n, batas;
    double pembilang = 0, penyebut = 0;
    double hasil = 0.0;

    // minta inputan dari user
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // input tiap batas nya
        cin >> batas;

        // kalo batas bukan -1 (-1 itu walk), tambahin ke perhitungan
        if (batas >= 0)
        {
            pembilang += batas;
            penyebut++;
        }
    }

    hasil = pembilang / penyebut;

    cout << hasil;

    return 0;
}