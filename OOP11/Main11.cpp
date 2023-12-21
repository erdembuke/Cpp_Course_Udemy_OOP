#include "HataSinifi.h"

int main() {

    try {
        int x;
        cout << "x degeri girin:";
        cin >> x;

        if (x < 0)
            throw HataSinifi("hata mesaji no1");
        else if (x == 0)
            throw 101; // ikinci bir catch yazmam gerekecek

        cout << "try sonu... x: " << x << endl; // burayi atlar

    } catch (HataSinifi h) {
        cout << "Exception yakalandi! Ozel hata mesaji: " << h.getHataMesaji() << endl;
    } catch (int hataKodu) {
        cout << "Exception yakalandi! Ozel hata mesaji: " << hataKodu << endl;
    }

    cout << "bye....";


    return 0;
}