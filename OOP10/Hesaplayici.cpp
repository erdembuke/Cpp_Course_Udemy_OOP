#include <iostream>
#include "Ogrenci_FriendClass.h"

using namespace std;

class Hesaplayici {
public:
    void ortalamaHesapla(Ogrenci_Friend ogr) {
        int ort = (ogr.not1 + ogr.not2) / 2;
        cout << ogr.ad << " isimli ogrenicin not ortalamasi: " << ort << endl;
    }
};

// normalde ayri bir main cpp olusturabilrdim ama burda olusturdum
int main() {

    Ogrenci_Friend ogr1("erdem",80,98);
    Ogrenci_Friend ogr2("enes",90,100);
    Hesaplayici hesaplayici;
    hesaplayici.ortalamaHesapla(ogr1);
    hesaplayici.ortalamaHesapla(ogr2);
}
