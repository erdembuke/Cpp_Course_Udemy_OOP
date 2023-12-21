#include "Otomobil_Constructor.h"
#include <iostream>
using namespace std;

// Otomobil_FriendMethod Constructor
OtomobilConstructor::OtomobilConstructor(string _renk, string _model, int _beygirGucu, int _my) {
    renk = _renk;
    model = _model;
    beygirGucu = _beygirGucu;
    my = _my;
}

void OtomobilConstructor::ruhsatBilgileriGoster2() {
    cout << "Model: " << OtomobilConstructor::model << endl;
    cout << "Beygir Gucu: " << OtomobilConstructor::beygirGucu << endl;
    cout << "Renk: " << OtomobilConstructor::renk << endl;
    cout << "Yil: " << OtomobilConstructor::my << endl;
}