#ifndef MANUSIA_H
#define MANUSIA_H
//membuat class manusia di file header manusia.h
class Manusia {
public:
    //membuat member variabel class manusia
    string name;
    jantung varJantung;

    //membuat constructor dan destructor class manusia
    Manusia(string pNama) : name(pNama) {
        cout << name << " Hidup\n";
    }
    ~Manusia() {
        cout << name << " Mati\n";
    }
};
#endif // MANUSIA_H