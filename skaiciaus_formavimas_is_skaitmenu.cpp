/* 

Skaičiaus formatavimas iš skaitmenų. Yra žinomi penkiaženklio skaičiaus skaitmenys a, b, c, d, e išdėstyti nuo pirmojo iki paskutiniojo skaitmens.
Sudarykite programą, kuri iš įvestų skaitmenu suformuotų penkiaženklį skaičių p.
Pasitikrinkite: jeigu a = 6, b = 4, c = 4, d = 7, e = 1, tuomet p = 64471.

*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, p;
    // a - desimties tukstanciu skaicius
    // b - tuskstanciu skaicius
    // c - simtu skaicius
    // d - desimciu skaicius
    // e - vienetu skaicius
    // p - suformuotas penkiazenklis skaicius


    cout << "Iveskite a: " << endl;
    cin >> a;
    cout << "Iveskite b: " << endl;
    cin >> b;
    cout << "Iveskite c: " << endl;
    cin >> c;
    cout << "Iveskite d: " << endl;
    cin >> d;
    cout << "Iveskite e: " << endl;
    cin >> e;

    p = (a * 10000) + (b * 1000) + (c * 100) + (d * 10) + e;

    cout << "Musu suformuotas skaicius p yra lygys: " << p << endl;

    return 0;
}
