#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
     ifstream:
     ifstream is input file stream which allows you to read the contents of a file.

     ofstream:
     ofstream is output file stream which allows you to write contents to a file

     fstream:
     fstream allows you both reading fromand writing to files by default
     However, you can have an fstream behave like an ifstream or ofstream
     by passing in the ios::open_mode flag
*/

int main() {
    fstream file;
    file.open("c:\\test\\fileName.txt", ios::out | ios::binary | ios::app); // dosya yoksa olustur, varsa yazmak icin ac
    // prof anlamda yazmak icin binary / ios::app koymazsak uzerine yazar, eklemez. bastan yazar
    // app ile 2-3 ya da daha fazla satir yazdiktan sonra app i silip tekrar calistirirsak tum satirlari siler ve
    // tek satir gonderilen string'i yazar.
    // binary, text oldugu zaman kullanilmayabilir. Diger durumlarda binary mode acilmali
    // binary de \n yazildiginda text dosyasinda alt satira gecmeyebilir

    // DOSYA OKUMAK ICIN; ios::out yerine ios::in yazariz
    // getline kullanirsak ilk satiri alir sadece, birden fazla satir varsa

    if (!file.is_open()) {
        cout << "dosya acilamiyor!\n";
    } else {
        file << endl; // alt satira yazmasi icin
        string str = "Hello !";
        file << str; // dosyaya string'i yaz.
        file.close(); // is bittikten sonra kapatmaliyiz

        // dosya okuma yapsaydik:
        // string str;
        // getline(file, str);  // getline fstream kutuphanesinin method u, ilk satiri okur sadece
        /*
         while dongusu kullanarak butun satirlari okutmak;

         while (getline(file,str)) {
         cout << str << endl;
         }
         */
        // file.close();
    }

        cout << endl;
    return 0;
}