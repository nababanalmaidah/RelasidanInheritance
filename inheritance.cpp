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