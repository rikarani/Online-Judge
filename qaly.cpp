// Source : https://open.kattis.com/problems/qaly
#include <iostream>
#include <iomanip> // setprecision()
using namespace std;

int main()
{
    // deklarasi variable
    int N; // the number of periods of constant quality of life during the person’s lifetime.
    double sumQALY = 0.0;

    // minta inputan dari user
    cin >> N;

    // minta inputan baris kedua pake perulangan
    for (int i = 1; i <= N; i++)
    {
        double q; // the quality of life in this period
        double y; // the number of years in this period

        cin >> q >> y;
        sumQALY += (q * y);
    }

    cout << fixed;
    cout << setprecision(3);
    cout << sumQALY << endl;

    return 0;
}