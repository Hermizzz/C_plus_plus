/*

Naujo skaičiaus formavimas. Nubrauktas triženklio skaičiaus x antrasis skaitmuo.
Prie likusio dviženklio skaičiaus iš kairės prirašius nubrauktąjį skaitmenį, gautas skaičius n (10 < n <= 999, be to, skaičiaus n dešimčių skaitmuo nelygus nuliui).
Parašykite programą, kuri apskaičiuotų, kokia buvo x reikšmė, kai n reikšmė įvedama klaviatūra.

Pasitikrinkite. Kai n = 135, tai turi būti spausdinama: Triženklis skaičius x = 315.

*/

#include <iostream>

using namespace std;

int main()
{

    int x, n, b;
    int n1, n2, n3;
    int x1, x2, x3;

    // x - pradinis skaicius (kurio ieskome)
    // n - suformuotas skaicius (kuri ivesime klaviatura)
    // b - kilnojamas x-o antrasis skaicius

    cout << "Iveskite skaiciu n: " << endl;
    cin >> n;

    n1 = n % 10;
    n2 = (n / 10) % 10;
    n3 = (n / 100) % 10;


    x1 = n1;
    x2 = n3;
    x3 = n2;

    x = (x3 * 100) + (x2 * 10) + x1;

    cout << "Skaicius x yra lygus: " << x <<endl;



    return 0;
}
