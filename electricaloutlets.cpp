// Source : https://open.kattis.com/problems/electricaloutlets
#include <iostream>
// #include <string> // string manipulation
using namespace std;

int main()
{
    // deklarasi variable
    int N; // indicating the number of test cases to follow
    int K; // indicating the number of power strips in the test case
    int O; // indicating the number of outlets in each power strip

    // minta inputan dari user
    cin >> N;

    // ulang buat K
    for (int i = 1; i <= N; i++)
    {
        int hasil = 0; // deklarasikan di dalam for biar nilainya ndak ditimpak

        // minta user masukan K
        cin >> K;

        // perulangan buat O
        for (int j = 1; j <= K; j++)
        {
            // minta user masukkan O
            cin >> O;

            // tambahkan nilai O yang diinputkan oleh user tadi kedalam variable hasil
            hasil += O;
        }

        // (K - 1) karna buat hubungin antar strip makan 1 lobang colokan
        cout << hasil - (K - 1) << endl;
    }

    return 0;
}