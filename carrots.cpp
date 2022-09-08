// Source : https://open.kattis.com/problems/carrots
#include <iostream> // Basic Input Output
using namespace std;

int main()
{
    // Deklarasi Variable
    int N, P = 0;
    string lines;

    // minta inputan dari user
    cin >> N >> P;

    for (int i = 1; i <= N; i++)
    {
        cin >> lines;
    }

    cout << P;
    return 0;
}