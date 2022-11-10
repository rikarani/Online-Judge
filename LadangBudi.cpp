// Source : PDF/LadangBudi.pdf
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    // deklarasi variable
    int n; // banyaknya hari Budi bertugas menyiram ladang
    int sum = 0;
    vector<int> ladangBudi;

    // minta inputan dari user
    cin >> n;

    // perulangan
    for (int i = 1; i <= n; i++)
    {
        int sisiLadang1, sisiLadang2;

        cin >> sisiLadang1 >> sisiLadang2;

        ladangBudi.push_back(pow(min(sisiLadang1, sisiLadang2), 2));
    }

    // cek dlu
    for (int i = 0; i < ladangBudi.size(); i++)
    {
        sum += ladangBudi[i];
        cout << ladangBudi[i] << endl;
    }

    cout << sum << endl;

    return 0;
}