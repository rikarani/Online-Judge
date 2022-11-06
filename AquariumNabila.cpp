// Source : PDF/AquariumNabila.pdf
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // deklarasi variable
    int panjang, lebar, tinggi;
    int N;         // banyaknya hiasan kubus yang ingin Nabila coba masukkan ke dalam aquarium
    int count = 0; // banyaknya hiasan yang tenggelam ke aquarium

    // minta inputan dari user
    cin >> panjang >> lebar >> tinggi;
    cin >> N;

    // bikin array
    int apalah[N];

    // input volume masing-masing kubus pake perulangan
    for (int i = 0; i < N; i++)
    {
        int Vk;

        cin >> Vk;

        // kalau panjang rusuknya lebih dari tinggi aquarium, berarti hiasan ndak muat
        if (cbrt(Vk) >= tinggi)
        {
            apalah[i] = 0;
        }
        else
        {
            count++;
            apalah[i] = cbrt(Vk);
        }
    }

    cout << count << endl;
    for (int i = 0; i < N; i++)
    {
        if (apalah[i] > 0)
        {
            cout << i + 1 << " ";
        }
    }
    return 0;
}