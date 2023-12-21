#include "Otomobil.h"
#include <iostream>
using namespace std;

void Otomobil_FriendMethod::ruhsatBilgileriGoster() {    // header'da olusturdugumuz metodu cpp de implement ettik
    cout << "Model: " << Otomobil_FriendMethod::model << endl;
    cout << "HorsePower: " << Otomobil_FriendMethod::beygirGucu << endl;
    cout << "Color : " << Otomobil_FriendMethod::renk << endl;
}
