// Source : PDF/Beatrix_Loss_of_Me.pdf
#include <iostream>
using namespace std;

int main()
{
    // deklarasi variable
    int E; // energi awal yang dimiliki sang pangeran
    int N; // banyak lawan yang akan dihadapi sang pangeran
    int count = 1;

    // minta inputan dari user
    cin >> E >> N;

    // input energi masing-masing musuh pake perulangan
    for (int i = 1; i <= N; i++)
    {
        int energiMusuh;

        cin >> energiMusuh;

        /*
        kalau energi pangeran yang sekarang dikurangin dengan energi musuh yang sedang
        dilawannya hasilnya lebih besar dari 0, berarti pangeran masih bisa bertarung
        */
        if ((E - energiMusuh) > 0)
        {
            count++;
            E -= energiMusuh; // E = E - energiMusuh
        }
        // kalau ndak, berarti pangeran dah kalah
        else
        {
            break;
        }
    }

    cout << count << endl;

    return 0;
}