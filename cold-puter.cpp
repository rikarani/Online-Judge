#include <iostream>
using namespace std;

int main()
{
    // Deklarasi Variable
    int n, t;
    int hasil = 0;

    // minta inputan dari user
    cin >> n;

    // input suhu dengan perulangan
    for (int i = 1; i <= n; i++)
    {
        cin >> t;

        // kalo suhu yang diinputkan dibawah 0 derajat, hasil + 1
        if (t < 0)
        {
            hasil++;
        }
    }

    cout << hasil;

    return 0;
}