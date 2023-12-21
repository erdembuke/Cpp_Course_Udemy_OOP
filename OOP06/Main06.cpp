#include "Otomobil_MemoryLeak.h"
#include <iostream>

using namespace std;

int main() {
    OtomobilMemoryLeak otomobil1("Yesil", "Volvo", 200, 4);
    otomobil1.setOtomobilRenk("Beyaz");

    OtomobilMemoryLeak otomobil2("Gri", "Saab", 150, 4);

    OtomobilMemoryLeak *p;
    p = &otomobil1;
    p->ruhsatBilgileriGoster();
    cout << endl;

    p = &otomobil2;
    p->ruhsatBilgileriGoster();
    cout << endl;

    // Pointer kullanarak yeni nesne olusturuma
    p = new OtomobilMemoryLeak("Beyaz", "BMW", 251, 2);
    p->setOtomobilRenk("Siyah");
    p->ruhsatBilgileriGoster();

    delete p;



    return 0;
}