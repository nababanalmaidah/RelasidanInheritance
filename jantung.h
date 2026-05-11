#ifndef JANTUNG_H
#define JANTUNG_H
//membuat class jantung di file header jantung.h
class Jantung {
public:
    //membuat constructor dan destructor dari class
    Jantung() {
        cout << "Jantung Ditambah\n";
    }
    ~Jantung() {
        cout << "Jantung Dimatikan\n";
    }
};

#endif // JANTUNG_H