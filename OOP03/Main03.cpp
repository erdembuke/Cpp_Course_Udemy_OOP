#include "Otomobil_Encapsulation.h"
#include <iostream>
using namespace std;

int main() {
    // constructor ile nesneleri cok daha az kod satiriyla olusturuyoruz

    OtomobilEncapsulation otomobil1("Yesil", "Volvo", 200, 2001);
    // otomobil1.renk = "beyaz"; public oldugu icin degistirebiliriz, private olursa disardan degistiremeyiz
    // ENCAPSULATION konseptine uygun olmaz, uygun olmasi icin direkt erisimi engellemeliyiz.
    otomobil1.setOtomobilRenk("Beyaz"); // private olan attribute'i method ile beyaz olarak degistirdik

    OtomobilEncapsulation otomobil2("Gri", "Saab", 150, 2007);

    otomobil1.ruhsatBilgileriGoster2(); // method ile tek satirda butun bilgileri yazdirdik
    cout << endl;

    otomobil2.ruhsatBilgileriGoster2();
    cout << endl;

    cout << otomobil2.getOtomobilRenk() << endl;

    return 0;
}