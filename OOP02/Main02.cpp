#include "Otomobil_Constructor.h"
#include <iostream>
using namespace std;

int main() {
    // constructor ile nesneleri cok daha az kod satiriyla olusturacagiz

    OtomobilConstructor otomobil1("Yesil", "Volvo", 200, 2001);
    otomobil1.renk = "beyaz";

    OtomobilConstructor otomobil2("Gri", "Saab", 150, 2007);

    otomobil1.ruhsatBilgileriGoster2(); // method ile tek satirda butun bilgileri yazdirdik
    cout << endl;

    otomobil2.ruhsatBilgileriGoster2();
    cout << endl;

    return 0;
}