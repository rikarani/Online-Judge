// Source : https://open.kattis.com/problems/oddecho
#include <iostream>
// #include <string> // string manipulation
using namespace std;

int main()
{
    // deklarasi variable
    int N; // berapa kali teriak?

    // minta masukan dari user
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        string teriak; // variable buat nyimpan ni orang teriak apa nantinya

        cin >> teriak; // ni orang teriak apa

        if (i % 2 == 1)
        {
            cout << teriak << endl;
        }
    }
    return 0;
}