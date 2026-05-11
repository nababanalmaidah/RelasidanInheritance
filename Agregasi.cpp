#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
    Ibu* varIbu = new Ibu("rani");
    Ibu* varIbu2 = new Ibu("sari");

    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("tiara");
    anak* varAnak3 = new anak("dini");

    return 0;
}