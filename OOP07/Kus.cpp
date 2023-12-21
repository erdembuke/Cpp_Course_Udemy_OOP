#include "Kus.h"

// constructor
Kus::Kus(string ad) : Hayvan(ad){
    // ek islemler
}

void Kus::uc() {
    cout << Hayvan::getIsim() << " ucuyor..." << endl;
}