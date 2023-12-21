#pragma once
#ifndef CPP_COURSE_UDEMY_OOP_OGRENCI_FRIEND_H
#define CPP_COURSE_UDEMY_OOP_OGRENCI_FRIEND_H
#endif //CPP_COURSE_UDEMY_OOP_OGRENCI_FRIEND_H

#include <iostream>

using namespace std;

class Ogrenci_Friend {
private:
    int not1;
    int not2;
    string ad;

public:
    Ogrenci_Friend(string _ad, int _not1, int _not2);
    friend class Hesaplayici; // Hesaplayici class im bu classtaki private attribute'lar a erisebilir demek.
};
