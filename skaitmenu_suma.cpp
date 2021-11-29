/*

Skaitmenų suma. Sudarykite programą, skaičiuojančią keturženklio natūraliojo skaičiaus k skaitmenų sumą s.
Pasitikrinkite: jei k = 5214, kompiuterio ekrane turi būti rodomas rezultatas: s = 12.

*/

#include <iostream>

using namespace std;

int main()


{

    cout << "Iveskite keturzenkli naturaluji skaiciu k: ";
    int k, s, a, b, c, d;

    // k - pradinis skaicius
    // s - skaitmenu suma
    // a - tukstanciu kiekis
    // b - simtu kiekis
    // c - desimciu kiekis
    // d - vienetu kiekis

    cin >> k;

    cout << "Musu ivestas skaicius k yra: " << k << endl;


    a = (k / 1000) % 10;
    b = (k / 100) % 10;
    c = (k / 10) % 10;
    d = k % 10;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    s = a + b + c + d;

    cout << "Skaitmenu suma lygi: " << s << endl;

    return 0;
}
