#include "Otomobil_Pointer.h"
#include <iostream>

using namespace std;

int main() {
    OtomobilPointer otomobil1("Yesil", "Volvo", 200, 4);
    otomobil1.setOtomobilRenk("Beyaz");
    // cout << "otomobil1 kapi sayisi = " << *(otomobil1.pKapiSayisi) << endl; // pointer e eristik (kapi sayisi)
    OtomobilPointer otomobil2("Gri", "Saab", 150, 4);

    OtomobilPointer *p;
    p = &otomobil1;
    p->ruhsatBilgileriGoster();   // int e erismek icin pointer'da *p idi, ama nesnenin icerigine erismek icin p->
    cout << endl;

    p = &otomobil2; // pointer in yerini otomobil2 ile degistirdik
    p->ruhsatBilgileriGoster(); // otomobil2 nin bilgileri yazdiracak
    cout << endl;

    // Pointer kullanarak yeni nesne olusturuma
    p = new OtomobilPointer("Beyaz", "BMW", 251, 2);
    p->setOtomobilRenk("Siyah"); // pointer ile setter method'a erisip otomobilin rengini Siyah yaptik
    p->ruhsatBilgileriGoster(); // renk siyah olacak
    // cout << "BMW kapi sayisi = " << *(p->pKapiSayisi) << endl; // pointer ile olusturdugumuz nesnenin icindeki pointer
    // a erismek icin p->pKapiSayisi seklinde erisiyoruz.


    delete p; // destructor method delete ile cagiriliyor
    // pointer ile olusturulan siniflari mutlaka isimiz bittiginde DELETE ile silmeliyiz, yoksa Bellekte reserved
    // edilen alan silinmez ve memory siser, delete olmadan programi calistirirsak ilk 2 obje silinir, ama pointer ile
    // olusturdugumuz nesne silinmez, onu ayrica delete ile silmeliyiz


    return 0;
}