//
//  main.cpp
//  prekes
//
//  Created by Simonas Razvanavicius on 20/03/2024.
//
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

void nuskaitytiFaila(int kasininkes[], float kainos[], int & n );
void vk(int kasininkes[], float kainos[], int nr, int n, float & suma, float & vidutinis);
float skaiciuojam(float kainos[], int n);
void irasyti(float sumu_masyvas[], float vidurkiu_masyvas[], float is_viso);

int main() {
    int n, kasininkes[100]; // n = 6
    float kainos[100];

    nuskaitytiFaila(kasininkes, kainos, n);
    float suma, vidutinis;
    
    // susikuriu dar 2 masyvus:
    float sumu_masyvas[3];
    float vidurkiu_masyvas[3];
    
    for (int i=1; i<=3; i++) {
        vk(kasininkes, kainos, i, n, suma, vidutinis);
        sumu_masyvas[i-1] = suma;
        vidurkiu_masyvas[i-1] = vidutinis;
    }
    
    float is_viso = skaiciuojam(kainos, n);
    
    irasyti(sumu_masyvas, vidurkiu_masyvas, is_viso);
    
    return 0;
}

float skaiciuojam(float kainos[], int n) {
    float visa_suma = 0;
    for (int i=0; i<n; i++) {
        visa_suma = visa_suma + kainos[i];
    }
    return visa_suma;
}

void irasyti(float sumu_masyvas[], float vidurkiu_masyvas[], float is_viso) {
    ofstream out("Rezultatai1.txt");
    if (out.is_open()) {
        for (int i=0; i<3; i++) {
            out << "Kasininkė " << i + 1 << ":" << endl;
            if (sumu_masyvas[i] > 0) {
                out << "Per dieną pardavė prekių už " << fixed << setprecision(2) << sumu_masyvas[i] << " Eur" << endl;
                out << "Vidutiniškai viena prekė kainavo " << fixed << setprecision(2) << vidurkiu_masyvas[i] <<  " Eur." << endl;
            } else {
                out << "Nepardavė nė vienos prekės." << endl;
            }

        }
        out << "Per dieną parduota prekių už " << fixed << setprecision(2) << is_viso <<  " Eur";
    }
    out.close();
}

void vk(int kasininkes[], float kainos[], int nr, int n, float & suma, float & vidutinis) {
    suma = 0;
    vidutinis = 0;
    int k = 0;
    
    for (int i=0; i<n; i++) {
        if (kasininkes[i] == nr) {
            suma = suma + kainos[i];
            k++;
        }
    }
    if (suma > 0) {
        vidutinis = suma / k;
    } else {
        vidutinis = 0;
    }
    
}


void nuskaitytiFaila(int kasininkes[], float kainos[], int & n ) {
    ifstream in("Duomenys1.txt");
    if (in.is_open()) {
        in >> n; // 6
        for (int i=0; i<n; i++) {
            in >> kasininkes[i];
            in >> kainos[i];
        }
        in.close();
    }
}
