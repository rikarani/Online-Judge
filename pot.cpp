// Source : https://open.kattis.com/problems/pot
#include <iostream> // Basic Input Output
#include <cmath>    // Akses operasi matematika
using namespace std;

int main()
{
    // Deklarasi Variable
    int N, P;
    int X = 0;

    // biar mudah ngitungnya
    int basis = 0;
    int eksponen = 0;

    // mau berapa banyak baris?
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        // Input tiap nilai nya
        cin >> P;

        // misal yang diinputkan 10004 berarti nanti jadinya 1000 pangkat 4
        basis = P / 10;
        eksponen = P % 10;

        // dipangkatin, trus hasilnya ditambah di variable X
        X += pow(basis, eksponen);
    }

    cout << X;

    return 0;
}