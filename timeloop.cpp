// Source : https://open.kattis.com/problems/timeloop
#include <iostream>
using namespace std;

int main()
{
    // deklarasi variable
    int N;

    // minta masukan dari user
    cin >> N;

    // cetak output pakek perulangan
    for (int i = 1; i <= N; i++)
    {
        cout << i << " Abracadabra" << endl;
    }

    return 0;
}