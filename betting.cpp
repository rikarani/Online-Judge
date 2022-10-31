// Source : https://open.kattis.com/problems/betting
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // deklarasi variable
    double a; // the percentage of switch points bet on option one.

    // minta inputan dari user
    cin >> a;

    // cetak langsung
    cout << fixed;
    cout << setprecision(10);
    cout << (100 / a) << endl;
    cout << (100 / (100 - a)) << endl;

    return 0;
}