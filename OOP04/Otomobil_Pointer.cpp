#include <iostream>
#include "Otomobil_Pointer.h"
using namespace std;
// Constructor Method
OtomobilPointer::OtomobilPointer(string _renk, string _model, int _beygirGucu, int kp) {
    cout << "constructor method cagirildi" << endl;
    renk = _renk;
    model = _model;
    beygirGucu = _beygirGucu;
    pKapiSayisi = new int(kp); // *pKapiSayisi = kp;
}

// Destructor Method - Aciklamasi Header dosyasinda
OtomobilPointer::~OtomobilPointer() {
    cout << OtomobilPointer::model << " Destructor method cagirildi" << endl;
    // hangi arabanin destructoru cagirildigini anlamak icin model ekledik, egitim amacli
}

void OtomobilPointer::ruhsatBilgileriGoster() {
    cout << "Renk: " << OtomobilPointer::getOtomobilRenk() << endl;
    cout << "Model: " << OtomobilPointer::getOtomobilModel() << endl;
    cout << "Beygir Gucu: " << OtomobilPointer::getOtomobilBeygirGucu() << endl;
    cout << "Kapi sayisi: " << *(OtomobilPointer::pKapiSayisi) << endl;
}

void OtomobilPointer::setOtomobilRenk(string _renk) {
    renk = _renk;
}

string OtomobilPointer::getOtomobilRenk() {
    return renk;
}

void OtomobilPointer::setOtomobilModel(string _model) {
    model = _model;
}

string OtomobilPointer::getOtomobilModel() {
    return model;
}

void OtomobilPointer::setOtomobilBeygirGucu(int _beygirGucu) {
    beygirGucu = _beygirGucu;
}

int OtomobilPointer::getOtomobilBeygirGucu() {
    return beygirGucu;
}
