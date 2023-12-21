#include "Otomobil_Encapsulation.h"
#include <iostream>
using namespace std;

// Otomobil_FriendMethod Constructor
OtomobilEncapsulation::OtomobilEncapsulation(string _renk, string _model, int _beygirGucu, int _my) {
    renk = _renk;
    model = _model;
    beygirGucu = _beygirGucu;
    my = _my;
}

void OtomobilEncapsulation::ruhsatBilgileriGoster2() {
    cout << "Model: " << OtomobilEncapsulation::model << endl;
    cout << "Beygir Gucu: " << OtomobilEncapsulation::beygirGucu << endl;
    cout << "Renk: " << OtomobilEncapsulation::renk << endl;
    cout << "Yil: " << OtomobilEncapsulation::my << endl;
}

// getter - setter methodlarinin yazilmasi (ENCAPSULATION)
void OtomobilEncapsulation::setOtomobilRenk(string _renk) {
    renk = _renk;
}

string OtomobilEncapsulation::getOtomobilRenk() {
    return renk;
}

void OtomobilEncapsulation::setOtomobilModel(std::string _model) {
    model = _model;
}

string OtomobilEncapsulation::getOtomobilModel() {
    return model;
}

void OtomobilEncapsulation::setOtomobilBeygirGucu(int _beygirGucu) {
    beygirGucu = _beygirGucu;
}

int OtomobilEncapsulation::getOtomobilBeygirGucu() {
    return beygirGucu;
}

void OtomobilEncapsulation::setMy(int _my) {
    my = _my;
}

int OtomobilEncapsulation::getMy() {
    return my;
}