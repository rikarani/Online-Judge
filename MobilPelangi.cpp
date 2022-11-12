// Source : PDF/MobilPelangi.pdf
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    // deklarasi variable
    int n; // banyaknya mobil yang dikeluarkan dari keranjang.
    int merah = 0;
    int kuning = 0;
    int hijau = 0;
    vector<int> baris;

    // minta inputan dari user
    cin >> n;

    // input kode warna mobil pake perulangan
    for (int i = 1; i <= n; i++)
    {
        int kodeWarna;

        cin >> kodeWarna;

        baris.push_back(kodeWarna);
    }

    // cek dulu
    for (int i = 0; i < baris.size(); i++)
    {
        if (baris[i] == 1)
        {
            merah++;
        }
        else if (baris[i] == 2)
        {
            kuning++;
        }
        else
        {
            hijau++;
        }
    }

    // cetak hasilnya
    if (merah == 0 || kuning == 0 || hijau == 0)
    {
        cout << "TIDAK ADA";
    }
    else
    {
        cout << min(min(merah, kuning), hijau);
    }

    return 0;
}