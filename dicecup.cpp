// Source : https://open.kattis.com/problems/dicecup
#include <iostream>
using namespace std;

int main()
{
    // deklarasi variable
    int N, M;

    // minta inputan dari user
    cin >> N >> M;

    // kalo N lebih gede dari M, tuker nilainya
    if (N > M)
    {
        swap(M, N);
    }

    for (int i = (N + 1); i < M + 2; i++)
    {
        cout << i << endl;
    }

    return 0;
}