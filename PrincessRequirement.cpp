// Source : PDF/PrincessRequirement.pdf
#include <iostream>
using namespace std;

int main()
{
    // deklarasi variable
    int N; //  jumlah gadis yang mengikuti seleksi
    int counter = 0;

    // minta inputan dari user
    cin >> N;

    int apalah[N];

    // input syarat pakek perulangan
    for (int i = 0; i < N; i++)
    {
        int p1, p2, p3, p4, p5, totalSyarat = 0;

        cin >> p1 >> p2 >> p3 >> p4 >> p5;

        totalSyarat = p1 + p2 + p3 + p4 + p5;

        if (totalSyarat >= 3)
        {
            apalah[i] = 1;
        }
        else
        {
            apalah[i] = 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (apalah[i] == 1)
        {
            counter++;
        }
    }

    if (counter > 0)
    {
        cout << counter << endl;
        for (int i = 0; i < N; i++)
        {
            if (apalah[i] == 1)
            {
                cout << i + 1 << " ";
            }
        }
    }
    else
    {
        cout << "0" << endl;
        cout << "TIDAK ADA" << endl;
    }

    return 0;
}