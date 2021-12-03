/*
Senoviniai Lietuvos ilgio matai. Lietuvoje iki Pirmojo pasaulio karo buvo plačiai naudojami senoviniai ilgio matai: sieksnis, 500 sieksnių sudaro varstą, 7 varstai sudaro mylią.
Parašykite programą, skaičiuojančią dviejų ilgių, išreikštų myliomis, varstais ir sieksniais, sumą ir skirtumą, išreikštą myliomis, varstais ir sieksniais.

Pradiniuose duomenyse įrašyta po 6 sveikuosius skaičius:
- pirmieji trys skaičiai reiškia pirmojo ilgio mylias m1, varstus v1 ir sieksnius s1,
- paskutinieji trys skaičiai - antrojo ilgio mylias m2, varstus v2 ir sieksnius s2.

Rezultatuose pirmieji trys skaičiai reiškia sumos mylias sm, sumos varstus sv, sumos sieksnius ss;
paskutinieji trys skaičiai - skirtumo mylias skm, skirtumo varstus skv, skirtumo sieksnius sks.

| Pradiniai duomenys | Rezultatai |
| 2 1 150            | 4 1 149    |
| 1 6 499            | 0 1 151    |

PASTABA: Negaunu tų pačių atsakymų/rezultatų..
*/

#include <iostream>
using namespace std;

int main()
{
    // pirmieji trys pradiniai skaiciai:
    int m1, v1, s1;

    // antrieji (arba kai salygoj parasyta - paskutinieji) trys pradiniai skaiciai:
    int m2, v2, s2;

    // sumos:
    int sm, sv, ss;

    // skirtumai:
    int skm, skv, sks;

    cout << "Iveskite pradinius duomenis:" << endl << endl;
    cout << "Iveskite mylias m1=";
    cin >> m1;
    cout << "Iveskite varstus v1=";
    cin >> v1;
    cout << "Iveskite sieksnius s1=";
    cin >> s1;

    cout << endl << "Iveskite mylias m2=";
    cin >> m2;
    cout << "Iveskite varstus v2=";
    cin >> v2;
    cout << "Iveskite sieksnius s2=";
    cin >> s2;

    // verciame visus pirmuosius duomenis i mylias, paskui i varstus ir tada i sieksnius:
    int visi_m1, visi_v1, visi_s1;
    visi_m1 = m1 + (v1 / 7) + (s1 / 3500);
    visi_v1 = (m1 * 7) + v1 + (s1 / 500);
    visi_s1 = (m1 * 3500) + (v1 * 7) + s1;

    // verciame visus antruosius duomenis i mylias, paskui i varstus ir tada i sieksnius:
    int visi_m2, visi_v2, visi_s2;
    visi_m2 = m2 + (v2 / 7) + (s2 / 3500);
    visi_v2 = (m2 * 7) + v2 + (s2 / 500);
    visi_s2 = (m2 * 3500) + (v2 * 7) + s2;

    sm = visi_m1 + visi_m2;
    sv = visi_v1 + visi_v2;
    ss = visi_s1 + visi_s2;

    skm = visi_m1 - visi_m2;
    skv = visi_v1 - visi_v2;
    sks = visi_s1 - visi_s2;

    cout << endl << "Rezultatai:" << endl << endl;

    cout << "Suma myliom sm=" << sm <<endl;
    cout << "Suma varstais sv=" << sv <<endl;
    cout << "Suma sieksniais sc=" << ss <<endl << endl;

    cout << "Skirtumas myliom skm=" << skm <<endl;
    cout << "Skirtumas varstais skv=" << skv <<endl;
    cout << "Skirtumas sieksniais sks=" << sks <<endl;

    return 0;
}
