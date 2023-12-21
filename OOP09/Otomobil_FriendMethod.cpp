#include <iostream>

using namespace std;

class Otomobil_FriendMethod {
private:
    string marka; // ayni cpp de olmasina ragmen mainde ve main disi methodlardan erisilemez,
    // sadece class Otomobil_FriendMethod icinden erisilebilir!!

public:
    int yil;
    Otomobil_FriendMethod(string _marka, int _yil) {
        marka = _marka;
        yil = _yil;
    }

    friend void bilgileriGoster(Otomobil_FriendMethod oto); // bilgileriGoster method u friend yaptik ve private olan attributeler'a
    // artik erisebilir.
};

void bilgileriGoster(Otomobil_FriendMethod oto) { // friend method
    cout << oto.yil << " model " << oto.marka; // friend oldugu icin "marka" private attribute'a disardan erisebildik
}



int main() {
    Otomobil_FriendMethod otomobil1("saab", 2008);
    bilgileriGoster(otomobil1);
}