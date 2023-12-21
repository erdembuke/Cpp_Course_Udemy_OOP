#include <iostream>
#include "Kopek.h"
#include "Kedi.h"
#include "Kus.h"


using namespace std;



int main() {
    /*
    Kedi tekir("Tekir");
    tekir.beslen();
    tekir.uyu();
    tekir.fareYakala();
    */

    Kopek sokak("Rex");
    sokak.beslen();
    sokak.havla();
    sokak.uyu();

    Kopek ev("lilo");
    Kopek sokak2("tommy");

    Kopek *kp = new Kopek("John");


    cout << "kopek sayisi = " << Kopek::getKopekSayisi() << endl; // 4

    delete kp; // pointer ile olusturdugum kopek nesnesini sildim

    cout << "kopek sayisi = " << Kopek::getKopekSayisi() << endl; // 3
    /*
    Kus kus("Birdie");
    kus.uc();
    kus.beslen();
    kus.uyu();
    */

    return 0;
}