// Source : https://open.kattis.com/problems/gcvwr
#include <iostream>
// #include <string> // string manipulation
using namespace std;

int main()
{
    // deklarasi variabel
    int G; // is the GCVWR in lbs
    int T; // is the weight of your truck in lbs
    int N; // is the number of items you want to bring camping
    int totalWeight = 0;
    int hasil = 0; // output nya

    // minta inputan dari user
    cin >> G >> T >> N;

    int remainingCapacity = 0.9 * (G - T); // remaining towing capacity

    for (int i = 1; i <= N; i++)
    {
        int w; // is the weight (in lbs) of the ’th item you want to bring on the trip

        // minta inputan buat berat tiap item nya
        cin >> w;

        // tambahin nilai berat item yang diinputin tadi
        totalWeight += w;
    }

    hasil = remainingCapacity - totalWeight;

    cout << hasil;

    return 0;
}