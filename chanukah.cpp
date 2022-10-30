// Source : https://open.kattis.com/problems/chanukah
#include <iostream>
using namespace std;

int main()
{
    // deklarasi variable
    int P;

    // minta inputan dari user
    cin >> P;

    // ulang ulangggg
    while (P--)
    {
        int K, N;

        cin >> K >> N;

        cout << K << " " << (N * (N + 1) / 2) + N << endl;
    }

    return 0;
}