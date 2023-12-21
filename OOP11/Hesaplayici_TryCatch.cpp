#include <iostream>

using namespace std;

int main() {

    // ornek1
    try {
        int yas;
        cout << "yasiniz:";
        cin >> yas;
        if (yas >= 18) {
            cout << "Erisim yetkiniz var, yeterince buyuksunuz\n";
        } else {
            throw (yas); // throw edilen
        }

    } catch (int hataNo) { // throw edilen catch de takalanir
        cout << "Erisim engellendi, en az 18 yasinda olmalisiniz\n";
        cout << "Yasiniz: " << hataNo << endl;
    }


    // ornek 2
    try {
        int x = 30;
        int y;
        cout << "Lutfen pozitif bir sayi girin:";
        cin >> y;

        if (y == 0)
            throw 100;
        else if (y < 0)
            throw 101;
        else {
            int z = (x / y);
            cout << z << endl;
        }

    } catch (int hataKodu) {
        cout << "bir exception olustu, hata kodu " << hataKodu << endl;
        if (hataKodu == 101) {
            cout << "negatif deger olculdu!";
            // return -1; bye yazmaz -1 ile cikiyor cunku program kapanir
        } else if (hataKodu == 100)
            cout << "0 degeri olculdu";
    }

    cout << "bye...\n";

    return 0;
}