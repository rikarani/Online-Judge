// Source : https://open.kattis.com/problems/pyramids
// tes pake trace table : https://www.101computing.net/trace-table/
#include <iostream>
// #include <string> // string manipulation
using namespace std;

int main()
{
    // deklarasi variable
    int N;                  // banyak balok yang tersedia
    int balokPerBaris = 0;  // banyaknya balok di tiap baris
    int banyaknyaBaris = 0; // banyaknya Baris yang bisa dibikin dari N blok
    int i = 1;              // balok awal untuk baris 1

    // minta inputan dari user
    cin >> N;

    while (balokPerBaris < N)
    {
        balokPerBaris += (i * i);
        i += 2;
        banyaknyaBaris++;

        if (balokPerBaris > N)
        {
            banyaknyaBaris--;
        }
    }

    cout << banyaknyaBaris;

    return 0;
}