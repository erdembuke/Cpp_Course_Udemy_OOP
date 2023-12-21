#include "Kedi.h"

// Constructor
Kedi::Kedi(string ad) : Hayvan(ad){
    // ek yapilacak islemleri de buraya yazabiliriz...
}

void Kedi::fareYakala() {
    cout << Hayvan::getIsim() << " fare yakaliyor..." << endl;
}