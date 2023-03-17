/*
Muhammad Rizkyputra Nova Wibawa
A11.2022.14438
A11.4212
*/

#include <iostream>

using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int hitungTotal(int arr[], int n) {
    int total = 0;
    for(int i=0; i<n; i++) {
        total += arr[i];
    }
    return total;
}

float hitungRataRata(int arr[], int n, int pembagi) {
    int total = 0;
    for(int i=0; i<n; i++) {
        total += arr[i];
    }
    float rata = (float)total / (n * pembagi);
    return rata;
}

int main() {
    int bil1, bil2, hasil;

    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    hasil = tambah(bil1, bil2);

    cout << "Hasil penjumlahan adalah: " << hasil << endl;

    return 0;
}

int main() {
    int bil1, bil2, hasil;

    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    hasil = kurang(bil1, bil2);

    cout << "Hasil pengurangan adalah: " << hasil << endl;

    return 0;
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int total = hitungTotal(arr, n);
    cout << "Jumlah total dari array adalah: " << total << endl;

    return 0;
}

int main() {
    int arr[] = {1, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    float rata = hitungRataRata(arr, n, 4);
    cout << "Rata-rata dari array dibagi dengan 4 adalah: " << rata << endl;

    return 0;
}
