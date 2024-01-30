#include <iostream>

using namespace std;

int main()
{
    int zuvuSkaicius;
    cout << "Iveskite kiek zuvu pagavo katinas: ";
    cin >> zuvuSkaicius;
    cout << endl;
    int didelesIrSkanios = 0;
    double didelesIrSkaniosSvoris = 0;
    int tikDideles = 0;
    int tikSkanios = 0;

    for (int i=1; i<=zuvuSkaicius; i++) {
        double tempSvoris;
        bool tempSkanu;
        cout << "Zuvis " << i << " :" << endl;
        cout << "Iveskite zuvies svori: ";
        cin >> tempSvoris;
        cout << "Iveskite ar zuvis buvo skani: ";
        cin >> tempSkanu;

        if (tempSvoris >= 1 && tempSkanu) {
            didelesIrSkanios++;
            didelesIrSkaniosSvoris += tempSvoris;
        }

        if (tempSvoris >= 1) {
            tikDideles++;
        }

        if (tempSkanu) {
            tikSkanios++;
        }
    }

    cout << endl;

    if (didelesIrSkanios > 0){
        cout << "Is viso senis katinas namo parsinese " << didelesIrSkanios << " zuveles" << endl;
        cout << "Bendras parsinestu zuveliu svoris buvo: " << didelesIrSkaniosSvoris << endl;
    } else {
        cout << "Senis katinas neparsinese jokiu zuveliu namo" << endl;
    }

    cout << "-----------" << endl;

    cout << "Is viso senis katinas pagavo " << tikDideles << " dideles zuveles" << endl;
    cout << "Is viso senis katinas pagavo " << tikSkanios << " skanias zuveles" << endl;

    return 0;
}
