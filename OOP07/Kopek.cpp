#include "Kopek.h"

int Kopek::kopekSayisi = 0;

// Constructor
Kopek::Kopek(string ad) : Hayvan(ad){
    // ek islemler
    kopekSayisi++;
}

Kopek::~Kopek() {
    kopekSayisi--;
}

void Kopek::havla() {
    cout << Hayvan::getIsim() << " havliyor..." << endl;
    // cout << Hayvan::isim << " havliyor..." << endl;  // Hayvan.h daki isim attribute'si protected olsa idi
    // get methodu olmaksizin direkt Hayvan::isim ile attribute'a erisebilirdik
    // protected kelimesi ile ana siniftaki degiskenleri alt siniflarda kullanabiliriz
    // protected ile alt siniftakiler erisebilir getter setter olmadan, ama publicten farki mainde vs disaridan
    // kullanilamaz, sadece alt siniflar erisebilir

}