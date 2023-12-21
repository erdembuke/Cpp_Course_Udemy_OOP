#pragma once
#ifndef CPP_COURSE_UDEMY_OOP_KOPEK_H
#define CPP_COURSE_UDEMY_OOP_KOPEK_H
#endif //CPP_COURSE_UDEMY_OOP_KOPEK_H

#include "Hayvan.h"

class Kopek : public Hayvan {
public:
    Kopek(string ad);
    ~Kopek();
    void havla();
    static int getKopekSayisi() {   // static methodlar herkes erisebildigi icin header icinde tanimlanir
        return kopekSayisi;
    }

private:
    static int kopekSayisi; // 0 a esitlemek icin const koymamiz gerek, ama const sonradan degismeyecek degerlere yazilir
    // o yuzden const yazip 0 a atayamayiz degisecek cunku. Bunun cozumu icin ilgili sinifin cpp dosyasi ustunde
    // int Kopek::kopekSayisi = 0;
    // public degil private static tanimlayip, public static METHOD tanimlamak daha dogru
};
