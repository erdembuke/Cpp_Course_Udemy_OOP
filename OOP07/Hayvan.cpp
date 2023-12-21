#include "Hayvan.h"

using namespace std;

Hayvan::Hayvan(string _ad) {
    isim = _ad;
}

void Hayvan::beslen() {
    cout << Hayvan::isim << " Besleniyor..." << endl;
}

void Hayvan::uyu() {
    cout << Hayvan::isim << " Uyuyuyor..." << endl;
}

void Hayvan::setIsim(string ad) {
    isim = ad;
}

string Hayvan::getIsim() {
    return isim;
}




