// Source : PDF/HardSum.pdf
#include <iostream>
using namespace std;

int main()
{
    // deklarasi variable
    int awal, akhir;
    unsigned int sum = 0;

    // minta inputan dari user
    cin >> awal >> akhir;

    // perulangan
    for (int i = awal; i <= akhir; i++)
    {
        // kalau genap, jumlahkan
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}