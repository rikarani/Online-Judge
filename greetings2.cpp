// Source : https://open.kattis.com/problems/greetings2
#include <iostream> // Basic Input Output
using namespace std;

int main()
{
    // Deklarasi Variable
    string s;
    int jumlahE = 0;

    // minta inputan dari user
    cin >> s;

    // hitung panjang string yang di-inputkan
    int stringLength = s.length();

    // hitung ada berapa banyak "e" yang diinputkan
    for (int i = 0; i < stringLength; i++)
    {
        if (s[i] == 'e')
        {
            jumlahE++;
        }
    }

    // print hasil akhirnya (e * 2)
    cout << "h";
    for (int j = 1; j <= (jumlahE * 2); j++)
    {
        cout << "e";
    }
    cout << "y";

    return 0;
}