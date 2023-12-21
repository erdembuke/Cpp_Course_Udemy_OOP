#ifndef CPP_COURSE_UDEMY_OOP_OTOMOBIL_CONSTRUCTOR_H
#define CPP_COURSE_UDEMY_OOP_OTOMOBIL_CONSTRUCTOR_H
#endif //CPP_COURSE_UDEMY_OOP_OTOMOBIL_CONSTRUCTOR_H

#include <iostream>

using namespace std;

class OtomobilConstructor {

public:
    string renk;
    string model;
    int beygirGucu;
    int my;

    void ruhsatBilgileriGoster2();
    OtomobilConstructor(string _renk, string _model, int _beygirGucu, int _my); // constructor tanimladik

};
