// Source : PDF/Pizzetta.pdf
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // deklarasi variable
    int N; // banyaknya pizza siku-siku yang diambil Eric.
    int pizzaEric = 0;
    double pizzaOrang = 0;
    vector<double> pizza;

    // minta inputan dari user
    cin >> N;

    // input alas dan tinggi pakek perulangan
    for (int i = 1; i <= N; i++)
    {
        double alas, tinggi;

        cin >> alas >> tinggi;

        pizza.push_back((alas * tinggi) / 2);
    }

    // karena Eric makan pizza yang paling besar dan paling kecil
    sort(pizza.begin(), pizza.end());
    pizzaEric = pizza[0] + pizza[N - 1];

    // itung pizza yang orang dapat
    for (int i = 1; i <= N - 2; i++)
    {
        pizzaOrang += pizza[i];
    }

    // cetak rata-rata
    cout << pizzaOrang / (N - 2) << endl;

    return 0;
}