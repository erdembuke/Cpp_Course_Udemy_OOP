#pragma once
#ifndef CPP_COURSE_UDEMY_OOP_KEDI_H
#define CPP_COURSE_UDEMY_OOP_KEDI_H
#endif //CPP_COURSE_UDEMY_OOP_KEDI_H

#include "Hayvan.h"

class Kedi : public Hayvan {
public:
    Kedi(string ad);
    void fareYakala();
};
