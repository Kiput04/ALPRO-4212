#include <iostream>
#include <string>

using namespace std;

struct Sepeda {
    string merk;
    string type;
    int tahun;
    string harga;
};

int main() {
    Sepeda sep;
    sep.merk = "Polygon";
    sep.type = "Sepeda Gunung";
    sep.tahun = 2013;
    sep.harga = "2.000.000";

    cout << "Merk: " << sep.merk << endl;
    cout << "Type: " << sep.type << endl;
    cout << "Tahun: " << sep.tahun << endl;
    cout << "Harga: " << sep.harga << endl;

    return 0;
}

