#include <iostream>

using namespace std;

// Base Class / Parent Class (Ana sinif) olusturuldu
class Hayvan {
public:
    virtual void sesCikart() {
        cout << "Hayvan sesCikart method cagirildi\n\n";
    }

    void yazdir() {
        cout << "Hayvan sinifinin yazdir method cagirildi\n";
    }
};

// Child class : Kedi
class Kedi : public Hayvan {
public:
    void sesCikart() {
        cout << "miyav miyav...\n";
    }

    /* virtual */void yazdir() {
        cout << "Kedi sinifinin yazdir method cagirildi\n";
    }
};

// Child class : Kopek
class Kopek : public Hayvan {
public:
    void sesCikart() {
        cout << "hav hav...\n";
    }

    void yazdir() {
        cout << "Kopek sinifi yazdir method cagirildi\n";
    }
};

// CEVAP :
// polymorphism ve pointer kullanarak kod kalabaligi onledik, hangi hayvanin pointerini gonderirsek onun sescikar
// method u cagirilip calistirilacak
void ucKezSesCikart(Hayvan *p) {
    for (int i = 0; i < 3; ++i) {
        p->sesCikart();
    }
}


int main() {

    // SORU :
    // cagirildiginda 3 kere ses cikartan bir method yaziniz
    // kedi icin cagirildiginda miyav, kopek icin cagirildiginda hav, yani gonderilen sinifa gore calisan bir method
    // olmali

    // CEVAP MAIN:
    Hayvan *p;
    Kedi inek;
    Kopek duman;

    p = &inek;
    ucKezSesCikart(p);
    // ucKezSesCikart(&inek); // diger bir kullanim, ekstra pointer olusturmadan &inek seklinde

    p = &duman;
    ucKezSesCikart(p);
    // ucKezSesCikart(&duman); // diger bir kullanim, ekstra pointer olusturmadan &duman seklinde




    return 0;
}