#include <iostream>
#include <list>

using namespace std;

void printList(list<int> list1) {
    list<int>::iterator itr;

    for (itr = list1.begin(); itr != list1.end(); itr++) {
        cout << *itr << "  ";   // iterator u pointer gibi dusun, icerigini yazdiracagimiz icin * koyduk
    }
    cout << endl;
}

void deleteList(list<int> list1) {
    list<int>::iterator it;
    it = list1.begin();
    it++;
    it++;
    it++;
    list1.erase(it);
}

void deleteListPointer(list<int> *pl) {
    list<int>::iterator it;
    it = pl->begin();
    it++;
    it++;
    it++;
    pl->erase(it);
}

int main() {

    list<int> lst; // integer bir list tanimladik
    lst.push_back(5); // listenin sonuna eklemek icin push back
    lst.push_back(8); // listenin sonuna eklemek icin push front
    lst.push_front(3); // listenin BASINA eklemek icin (3,5,8)

    /*
    lst.pop_back(); // listenin sonundaki elemani cikartir (3,5) -> listede kalan elemanlar
    lst.pop_front(); // listenin sonundaki elemani cikartir (5) -> listede kalan eleman
    */

    // insert ve iterator ile eleman eklemek
    // 5 ile 8 arasina 9 u eklemek istiyorum
    list<int>::iterator it;
    it = lst.begin();
    // lst.insert(it, 15); // 3 ün soluna, yani basa 15 ekler, begin'de cunku.
    it++; // 3 ile 5 arasina geldi
    it++; // 5 ile 8 arasina geldi
    lst.insert(it, 9); // 9 u ekledik
    // 3 5 9 8 suan

    // 3 den sonra iki adet 7 eklemek istiyorum
    it = lst.begin();
    it++;
    lst.insert(it, 2, 7); // 2 adet 7 eklemek , ortaya adet sayisi // 3 7 7 5 9 8
    printList(lst); // yazdiriyorum

    // 3 7 7 5 9 8
    // list'de aradan eleman silmek
    // method ile eleman silmek sikinti yaratabilir.
    it = lst.begin();
    // 5 e gelmesi icin 3 kere iterator u ileri atacagim 5 in ONUNE gelmesi icin
    it++;
    it++;
    it++;
    lst.erase(it);
    printList(lst); // 3 7 7 9 8

    deleteList(lst); // 3 7 7 9 8 yazacak, silmeyecek eleman. cunku methoda referans yok, kopyasi gidiyor method'a

    deleteListPointer(&lst); // lst nin adresini gonderdik, pointer yani. Simdi listenin icinden elemani silecek
    // 3 7 7 8 yazar

    printList(lst);




    return 0;
}