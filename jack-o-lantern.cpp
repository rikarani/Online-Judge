// Source : https://open.kattis.com/problems/jackolanternjuxtaposition
#include <iostream>
// #include <string> // string manipulation
using namespace std;

int main()
{
    // deklarasi variable
    int N; // mata
    int T; // hidung
    int M; // mulut
    int hasil = 0;

    // minta inputan dari user
    cin >> N >> T >> M;

    // hitung
    hasil = N * T * M;

    // cetak hasilnya
    cout << hasil;

    return 0;
}