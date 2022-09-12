// Source : https://open.kattis.com/problems/triarea
#include <iostream>
#include <iomanip> // buat set angka dibelakang koma
using namespace std;

int main()
{
    // deklarasi variable
    double h = 0;      // tinggi segitiga
    double b = 0;      // alas segitiga
    double luas = 0.0; // luas segitiga

    // minta inputan dari user
    cin >> h >> b;

    // hitung luas segitiga
    cout << fixed;
    cout << setprecision(5);
    luas = (b * h) / 2;

    // cetak luas segitiga
    cout << luas;

    return 0;
}