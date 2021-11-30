/*

Žaidimas su skaičiaus skaitmenimis. Yra daug žaidimų, susijusių su naujų skaičių sudarymu panaudojant žinomo natūraliojo skaičiaus skaitmenis.
Parenkite programą, kuri iš įvesto natūraliojo triženklio skaičiaus x suformuotų naują skaičių s, tenkinantį žemiau nurodytas sąlygas.

> Pirmasis naujo skaičiaus skaitmuo gaunamas padidinus pirmąjį pradinio skaičiaus skaičiaus skaitmenį dviem.
  Jei padidinus gaunamas dviženklis skaičius, tuomet pirmuoju skaičiu tampa antrasis dviženklio skaičiaus skaitmuo.
  
> Antrasis naujo skaičiaus skaitmuo gaunamas sudėjus pradinio skaičiaus pirmąjį ir paskutinįjį skaitmenis.
  Jei gaunamas dviženklis skaičius, tuomet antruoju skaitmeniu tampa antrasis dviženklio skaičiaus skaitmuo.

> Trečiasis naujo skaičiaus skaitmuo gaunamas padidinus antrąjį pradinio skaičiaus skaitmenį 2 kartus.
  Jei gaunamas dviženklis skaičius, tuomet trečiuoju skaitmeniu tampa antrasis dviženklio skaičiaus skaitmuo.

-----------------------------------
| Pradiniai duomenys | Rezultatai |
| 759                | 960        |
-----------------------------------
  
*/

#include <iostream>

using namespace std;

int main()
{
    int x, s;
    // x - pradinis skaicius
    // s - suformuotas (naujas) skaicius

    int x1, x2, x3, s1, s2, s3;
    // x1, x2, x3 - pradinio skaiciaus skaitmenys
    // Tarkim x = 123, tai x1 = 1, x2 = 2, x3 = 3
    // s1, s2, s3 - suformuoto (naujo) skaiciaus skaitmenys

    cout << "Iveskite pradini skaiciu x: ";
    cin >> x;

    // randame pradinio skaiciaus skaitmenis x1, x2, x3:
    x1 = (x / 100) % 10;
    x2 = (x / 10) % 10;
    x3 = x % 10;

    // pagal duota salyga randame naujojo skaiciaus skaitmenis s1, s2, s3:
    s1 = (x1 + 2) % 10;
    s2 = (x1 + x3) % 10;
    s3 = (x2 * 2) % 10;

    // simtu skaiciu s1 padauginam is 100 + desimciu skaiciu s2 padauginam is 10 + vienetu skaicius
    s = (s1 * 100) + (s2 * 10) + s3;

    cout << "Suformuotas (naujas) skaicius s: " << s;
    return 0;
}
