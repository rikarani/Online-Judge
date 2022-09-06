// Source : https://open.kattis.com/problems/jumbojavelin
#include <iostream> // Basic Input Output
using namespace std;

int main()
{
    // Deklarasi Variable
    int N, length;
    int totalLength = 0;

    // mau berapa banyak batang javelin?
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        // input panjang javelin
        cin >> length;

        // itung
        totalLength += length - 1;
    }

    // tampilkan total panjang javelin setelah disambung
    cout << totalLength + 1;

    return 0;
}