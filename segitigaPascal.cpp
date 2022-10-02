#include <iostream>
using namespace std;

int faktorial(int n)
{
    int a = 1;
    int i = 1;

    while (i <= n)
    {
        a = a * i;
        i++;
    }

    return a;
}

int main()
{
    int b;

    cout << "Masukkan Banyaknya Segitiga Pascal: ";
    cin >> b;

    for (int i = 0; i < b; i++)
    {

        for (int j = 0; j < b - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << faktorial(i) / (faktorial(j) * faktorial(i - j)) << " ";
        }

        cout << endl;
    }

    return 0;
}