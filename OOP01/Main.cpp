#include <iostream>
#include "Otomobil.h"

using namespace std;


int main() {
    Otomobil_FriendMethod otomobil1, otomobil2;

    otomobil1.renk = "Yesil";
    otomobil1.beygirGucu = 200;
    otomobil1.model = "2001";

    otomobil2.renk = "Gri";
    otomobil2.beygirGucu = 150;
    otomobil2.model = "2007";

    cout << "otomobil1 renk = " << otomobil1.renk << endl;
    cout << "otomobil2 renk = " << otomobil2.renk << endl; // tek tek yazdirmak yerine asagidaki metodu kullandik
    cout << endl;

    otomobil1.ruhsatBilgileriGoster(); // butun bilgileri olusturdugumuz method u kullanarak yazdirdik
    cout << endl;

    otomobil2.ruhsatBilgileriGoster();
    cout << endl;


    return 0;
}