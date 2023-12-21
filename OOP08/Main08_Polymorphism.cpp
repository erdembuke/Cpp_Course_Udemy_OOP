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


int main() {
    Hayvan *pHayvan;
    Kedi tekir;
    pHayvan = &tekir;

    pHayvan->sesCikart();   // miyav miyav.. , sesCikart() virtual oldugu icin child class method calisacak
    pHayvan->yazdir();      // yazdir() method virtual olmadigi icin parent class gidip ordaki yazdir i cagiracak

    Kopek karabas;
    pHayvan = &karabas; // pointer'imizi karabas adresine yonelttik.

    pHayvan->sesCikart(); // hav hav.. , sesCikart() virtual oldugu icin child class method cagirilacak
    pHayvan->yazdir(); // parent class'daki yazdir calisacak, yazdir method virtual olmadigi icin.
    karabas.yazdir(); // bu sekilde cagirirsak kopek sinifi yazdir cagirilir

    delete pHayvan; // pointer'i bellekten sildik, memory leak onlemek icin.





    return 0;
}