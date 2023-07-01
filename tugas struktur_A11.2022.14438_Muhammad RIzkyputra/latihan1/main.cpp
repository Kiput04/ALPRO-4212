#include <iostream>

using namespace std;

const double PHI = 3.1415;

struct PersegiPanjang {
    double p;
    double l;

    double Luas() {
        return p * l;
    }
};

struct Lingkaran {
    double r;

    double Luas() {
        return PHI * r * r;
    }
};

struct Kerucut {
    double r;
    double t;

    double hVolume() {
        return (1.0 / 3.0) * PHI * r * r * t;
    }
};

struct Bola {
    double r;

    double hVolume() {
        return (4.0 / 3.0) * PHI * r * r * r;
    }
};

int main() {
    PersegiPanjang pp;
    pp.p = 14.912;
    pp.l = 6.783;

    double luasPersegiPanjang = pp.Luas();
    cout << "Luas Persegi Panjang: " << luasPersegiPanjang << endl;

    Lingkaran ling;
    ling.r = 4.2754;

    double luasLingkaran = ling.Luas();
    std::cout << "Luas Lingkaran: " << luasLingkaran << std::endl;

    Kerucut ker;
    ker.r = 3.9812;
    ker.t = 13.498;

    double volumeKerucut = ker.hVolume();
    std::cout << "Volume Kerucut: " << volumeKerucut << std::endl;

    Bola bol;
    bol.r = 5.973;

    double volumeBola = bol.hVolume();
    std::cout << "Volume Bola: " << volumeBola << std::endl;

    return 0;
}
