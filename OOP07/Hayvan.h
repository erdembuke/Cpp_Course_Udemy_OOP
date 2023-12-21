#pragma once
#ifndef CPP_COURSE_UDEMY_OOP_HAYVAN_H
#define CPP_COURSE_UDEMY_OOP_HAYVAN_H
#endif //CPP_COURSE_UDEMY_OOP_HAYVAN_H

#include <iostream>

using namespace std;

class Hayvan {

public:
    Hayvan(string ad);
    void beslen();
    void uyu();
    void setIsim(string ad);
    string getIsim();


                    // protected ile alt siniftakiler erisebilir getter setter olmadan, ama publicten farki mainde vs
// protected:       // disaridan kullanilamaz, sadece alt siniflar erisebilir. private yerine protected olsaydi
private:            // getter setter method olmadan alt siniflardan attribute'a erisebilirdik
                    // tek basina kodlancaksa ya da projedeki herkes kodlama hakimse ise protected olabilir
                    // ama baskalari ile kodlarken direkt erismesini istemezsek, ya da projeye hakim degilse herkes
                    // private yaparak olası kaos senaryolari onlenebilir.

    string isim;
};
