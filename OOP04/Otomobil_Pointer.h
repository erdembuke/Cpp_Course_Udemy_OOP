#ifndef CPP_COURSE_UDEMY_OOP_OTOMOBIL_POINTER_H
#define CPP_COURSE_UDEMY_OOP_OTOMOBIL_POINTER_H
#endif //CPP_COURSE_UDEMY_OOP_OTOMOBIL_POINTER_H

#include <iostream>

using namespace std;

class OtomobilPointer {

public:
    // Constructor
    OtomobilPointer(string _renk, string _model, int _beygirGucu, int kp);

    // Destructor (nesne scope disina ciktiginda, ya da silindiginde
    // bellekte rezerve edilmis yeri siler ve kullanima acar)
    ~OtomobilPointer();

    void ruhsatBilgileriGoster();

    void setOtomobilRenk(string _renk);
    string getOtomobilRenk();

    void setOtomobilModel(string _model);
    string getOtomobilModel();

    void setOtomobilBeygirGucu(int _beygirGucu);
    int getOtomobilBeygirGucu();

    int *pKapiSayisi;

private:
    string renk;
    string model;
    int beygirGucu;
};
