#ifndef CPP_COURSE_UDEMY_OOP_OTOMOBIL_CONSTRUCTOR_H
#define CPP_COURSE_UDEMY_OOP_OTOMOBIL_CONSTRUCTOR_H
#endif //CPP_COURSE_UDEMY_OOP_OTOMOBIL_CONSTRUCTOR_H

#include <iostream>

using namespace std;

class OtomobilEncapsulation {

public:
    void ruhsatBilgileriGoster2();
    OtomobilEncapsulation(string _renk, string _model, int _beygirGucu, int _my); // constructor tanimladik

    // getter - setter methodlari ile private olan attribute'lerime erisim saglayacagim
    // ENCAPSULATION
    void setOtomobilRenk(string _renk);
    string getOtomobilRenk();

    void setOtomobilModel(string _model);
    string getOtomobilModel();

    void setOtomobilBeygirGucu(int _beygirGucu);
    int getOtomobilBeygirGucu();

    void setMy(int _my);
    int getMy();

    // ENCAPSULATION
private:
    string renk;
    string model;
    int beygirGucu;
    int my;
};
