// Source : https://open.kattis.com/problems/tarifa
#include <iostream>
// #include <string> // string manipulation
using namespace std;

int main()
{
    // deklarasi variable
    int X; // jatah kuota internet
    int N; // berapa bulan?
    int hasil = 0;
    int sisaKuota = 0; // sisa kuota perbulannya

    // minta masukan dari user (jatah kuota)
    cin >> X;

    // minta masukan dari user (berapa bulan?)
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        int P;

        cin >> P;
        sisaKuota += (X - P);
    }

    // kuota di bulan ke-4
    hasil += (X + sisaKuota);

    // print hasilnya
    cout << hasil;

    return 0;
}