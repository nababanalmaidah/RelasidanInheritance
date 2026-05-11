#include <iostream>
#include <string>
using namespace std;

//pembuatan class orang
class orang {
public:
    
    string nama;

    
    orang(string pNama) : nama(pNama) {
        cout << "Orang dibuat\n" << endl;
    }

    ~orang() {
        cout << "Orang dihapus\n" << endl;
    }
};

class orang {
    //pembuatan function jumlah
    int jumlah(int a, int b) {
        return a + b;
    }
};

class pelajar : public orang {
public:

    string sekolah;

    
    pelajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah) {
        cout << "Pelajar dibuat\n" << endl;
    }
}

string perkenalan() {
        return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n\n";
    }
};

int main()
{
    //deklarasi dan pemberian nilai untuk variabel object siswa1
    pelajar siswa1("andi laksono", "SMAN 1 Bantul");
    
    //pemanggilan function perkenalan dari class pelajar
    cout << siswa1.perkenalan();

    return 0;
}

int main()
{
    //deklarasi dan pemberian nilai untuk variabel object siswa1
    pelajar siswa1("andi laksono", "SMAN 1 Bantul");

    //pemanggilan function perkenalan dari class pelajar
    cout << siswa1.perkenalan();

    //pemanggilan function warisan dari class orang kepada class object
    cout << "Hasil = " << siswa1.jumlah(10, 90) << endl;

    return 0;
}