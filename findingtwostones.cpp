// Source : https://open.kattis.com/problems/twostones
#include <iostream>
// #include <string> // string manipulation
using namespace std;

int main()
{
    // deklarasi variable
    int N;

    // minta inputan dari user
    cin >> N;

    // cek
    if (N % 2 == 0)
    {
        cout << "Bob";
    }
    else
    {
        cout << "Alice";
    }

    return 0;
}