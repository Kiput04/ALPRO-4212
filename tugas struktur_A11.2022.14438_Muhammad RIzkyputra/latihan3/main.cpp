#include <iostream>

typedef float T;

struct PersegiPanjang {
    T panjang;
    T lebar;
};

struct Lingkaran {
    T radius;
};

struct Kerucut {
    T radius;
    T tinggi;
};

struct Bola {
    T radius;
};

T luasPersegiPanjang(const PersegiPanjang& pp) {
    return pp.panjang * pp.lebar;
}

T luasLingkaran(const Lingkaran& lingkaran) {
    return 22.0 / 7.0 * lingkaran.radius * lingkaran.radius;
}

T volumeKerucut(const Kerucut& kerucut) {
    return 1.0 / 3.0 * 3.14 * kerucut.radius * kerucut.radius * kerucut.tinggi;
}

T volumeBola(const Bola& bola) {
    return 4.0 / 3.0 * 3.14 * bola.radius * bola.radius * bola.radius;
}

int main() {
    PersegiPanjang pp;
    pp.panjang = 5;
    pp.lebar = 3;

    Lingkaran lingkaran;
    lingkaran.radius = 4;

    Kerucut kerucut;
    kerucut.radius = 3;
    kerucut.tinggi = 7;

    Bola bola;
    bola.radius = 2;

    T hasilLuasPersegiPanjang = luasPersegiPanjang(pp);
    T hasilLuasLingkaran = luasLingkaran(lingkaran);
    T hasilVolumeKerucut = volumeKerucut(kerucut);
    T hasilVolumeBola = volumeBola(bola);

    cout << "Luas Persegi Panjang: " << hasilLuasPersegiPanjang << endl;
    cout << "Luas Lingkaran: " << hasilLuasLingkaran << endl;
    cout << "Volume Kerucut: " << hasilVolumeKerucut << endl;
    cout << "Volume Bola: " << hasilVolumeBola << endl;

    return 0;
}
