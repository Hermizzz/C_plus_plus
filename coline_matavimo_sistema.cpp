/*

Colinë matavimo sistema. Kai kuriose ðalyse dar ir dar vartojama colinë matavimo sistema. 12 coliø sudaro pëdà, o 3 pëdos lygios vienam jardui.
Paraðykite programà, skaièiuojanèià dviejø skirtingø ilgiø, iðreikðtø jardais, pëdomis ir coliais, sumà ir skirtumà, iðreikðtà jardais, pëdomis ir coliais.

Pradiniuose duomenyse pirmieji trys skaièiai reiðkia ilgio jardus j1, pëdas p1 ir colius c1, paskutinieji trys skaièiai - antrojo ilgio jardus j2, pëdas p2 ir colius c2.
Rezultatuose pirmieji trys skaièiai reiðkia sumos jardus sj, sumos pëdos sp, sumos colius sc; paskutinieji trys skaièiai - skirtumo jardus skj, skirtumo pëdas skp, skirtumo colius skc.

PASTABA: Negaunu tų pačių atsakymų..

*/

#include <iostream>
using namespace std;

int main()
{
    // pirmieji trys pradiniai skaiciai:
    int j1, p1, c1;

    // antrieji (arba kai salygoj parasyta - paskutinieji) trys pradiniai skaiciai:
    int j2, p2, c2;

    // sumos:
    int sj, sp, sc;

    // skirtumai:
    int skj, skp, skc;

    cout << "Iveskite pradinius duomenis:" << endl << endl;
    cout << "Iveskite jardus j1=";
    cin >> j1;
    cout << "Iveskite pedas p1=";
    cin >> p1;
    cout << "Iveskite colius c1=";
    cin >> c1;

    cout << endl << "Iveskite colius j2=";
    cin >> j2;
    cout << "Iveskite jardus p2=";
    cin >> p2;
    cout << "Iveskite pedas c2=";
    cin >> c2;

    // verciame visus pirmuosius duomenis i jardus, paskui i pedas ir tada i colius:
    int visi_j1, visi_p1, visi_c1;
    visi_j1 = j1 + (p1 / 3) + (c1 / 36);
    visi_p1 = (j1 * 3) + p1 + (c1 / 12);
    visi_c1 = (j1 * 36) + (p1 * 3) + c1;

    // verciame visus antruosius duomenis i jardus, paskui i pedas ir tada i colius:
    int visi_j2, visi_p2, visi_c2;
    visi_j2 = j2 + (p2 / 3) + (c2 / 36);
    visi_p2 = (j2 * 3) + p2 + (c2 / 12);
    visi_c1 = (j2 * 36) + (p2 * 3) + c2;

    sj = visi_j1 + visi_j2;
    sp = visi_p1 + visi_p2;
    sc = visi_c1 + visi_c2;

    skj = visi_j1 - visi_j2;
    skp = visi_p1 - visi_p2;
    skc = visi_c1 - visi_c2;

    cout << endl << "Rezultatai:" << endl << endl;

    cout << "Suma jardais sj=" << sj <<endl;
    cout << "Suma pedomis sp=" << sp <<endl;
    cout << "Suma coliais sc=" << sc <<endl << endl;

    cout << "Skirtumas jardais skj=" << skj <<endl;
    cout << "Skirtumas pedomis skp=" << skp <<endl;
    cout << "Skirtumas coliais skc=" << skc <<endl;

    return 0;
}
