#include <iostream>
#include "Otomobil_MemoryLeak.h"
using namespace std;
// Constructor Method
OtomobilMemoryLeak::OtomobilMemoryLeak(string _renk, string _model, int _beygirGucu, int kp) {
    cout << "constructor method cagirildi" << endl;
    renk = _renk;
    model = _model;
    beygirGucu = _beygirGucu;
    pKapiSayisi = new int(kp); // *pKapiSayisi = kp;
}

// Destructor Method - Aciklamasi Header dosyasinda
OtomobilMemoryLeak::~OtomobilMemoryLeak() {
    cout << OtomobilMemoryLeak::model << " Destructor method cagirildi" << endl;
    // hangi arabanin destructoru cagirildigini anlamak icin model ekledik, egitim amacli

    delete pKapiSayisi; // olusturulan pointer'lar destructor method un icinde tek tek silinmelidir
    // bir onceki ders (OOP04) de pointer'lar delete edilmedigi icin memory leakage olmustu ve bellekte yer kaplamisti
}

void OtomobilMemoryLeak::ruhsatBilgileriGoster() {
    cout << "Renk: " << OtomobilMemoryLeak::getOtomobilRenk() << endl;
    cout << "Model: " << OtomobilMemoryLeak::getOtomobilModel() << endl;
    cout << "Beygir Gucu: " << OtomobilMemoryLeak::getOtomobilBeygirGucu() << endl;
    cout << "Kapi sayisi: " << *(OtomobilMemoryLeak::pKapiSayisi) << endl;
}

void OtomobilMemoryLeak::setOtomobilRenk(string _renk) {
    renk = _renk;
}

string OtomobilMemoryLeak::getOtomobilRenk() {
    return renk;
}

void OtomobilMemoryLeak::setOtomobilModel(string _model) {
    model = _model;
}

string OtomobilMemoryLeak::getOtomobilModel() {
    return model;
}

void OtomobilMemoryLeak::setOtomobilBeygirGucu(int _beygirGucu) {
    beygirGucu = _beygirGucu;
}

int OtomobilMemoryLeak::getOtomobilBeygirGucu() {
    return beygirGucu;
}
