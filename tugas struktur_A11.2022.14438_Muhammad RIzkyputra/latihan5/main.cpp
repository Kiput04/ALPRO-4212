#include <iostream>
#include <string>

struct Sepeda {
    std::string merk;
    std::string type;
    int tahun;
    std::string harga;
};

int main() {
    Sepeda sepeda;
    Sepeda* ptrSepeda = &sepeda;

    ptrSepeda->merk = "Polygon";
    ptrSepeda->type = "Sepeda Gunung";
    ptrSepeda->tahun = 2013;
    ptrSepeda->harga = "2.000.000";

    std::cout << "Merk: " << ptrSepeda->merk << std::endl;
    std::cout << "Type: " << ptrSepeda->type << std::endl;
    std::cout << "Tahun: " << ptrSepeda->tahun << std::endl;
    std::cout << "Harga: " << ptrSepeda->harga << std::endl;

    return 0;
}
