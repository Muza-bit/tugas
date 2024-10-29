#include <iostream>
using namespace std;


void hitungEnergiKinetik(double massa, double beratAndika, double kecepatan) {

    double massaSepedaKg = massa / 1000.0;


    double massaTotal = massaSepedaKg + beratAndika;


    double energiKinetik = 0.5 * massaTotal * (kecepatan * kecepatan);


    cout << "Energi Kinetik Andika saat mengendarai sepeda adalah " << energiKinetik << " Joule" << endl;
}

int main() {

    double massaSepeda = 1500;
    double beratAndika = 47.5;
    double kecepatan = 4;


    hitungEnergiKinetik(massaSepeda, beratAndika, kecepatan);

    return 0;
}
