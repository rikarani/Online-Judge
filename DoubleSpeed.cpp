// Source : PDF/DoubleSpeed.pdf
#include <iostream>
using namespace std;

int main()
{
    // deklarasi variable
    double jarak, waktu; // jarak dalam meter, waktu dalam menit
    double kecepatan = 0;

    // minta inputan dari user
    cin >> jarak;
    cin >> waktu;

    kecepatan = ((jarak / 1000) / (waktu / 60)) * 2;

    cout << kecepatan << " km/jam";

    return 0;
}