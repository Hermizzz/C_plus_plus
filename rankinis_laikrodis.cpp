/*

Rankinis laikrodis. Jonas nori būti tikru verslininku. Kad suspėtų į visus posėdžius, jis nusipirko mechaninį rankinį laikrodį. Skubėdamas susidūrė su praeiviu ir laikrodžio ciferblatas pasisuko dešinėn 90 laipsnių kampu.
Duotas po ciferblato pasisukimo rodomas laikas laikrodyje valandomis ir minutėmis. Padėkite Jonui nustatyti, koks laikas buvo rodomas prieš susidūrimą valandomis ir minutėmis.

| Pradiniai duomenys | Rezultatai |
| 10 13              | 1 28       |


*/

#include <iostream>

using namespace std;

int main()
{
    int po_susidurimo_valandos, po_susidurimo_minutes;
    int pries_susidurima_valandos, pries_susidurima_minuciu;

    cout << "Iveskite kiek dabar Jono laikrodis rodo valandu: ";
    cin >> po_susidurimo_valandos;
    cout << "Iveskite kiek dabar Jono laikrodis rodo minuciu: ";
    cin >> po_susidurimo_minutes;

    pries_susidurima_valandos = (po_susidurimo_valandos + 3) % 12;
    if (pries_susidurima_valandos == 0) {
        pries_susidurima_valandos = 12;
    }

    pries_susidurima_minuciu = (po_susidurimo_minutes + 15) % 60;

    cout << "Laikrodis pries susidurima su praeiviu rode " << pries_susidurima_valandos << " valandu ir " << pries_susidurima_minuciu << " minuciu" << endl;

    return 0;
}
