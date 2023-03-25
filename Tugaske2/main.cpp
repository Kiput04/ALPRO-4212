/*
Muhammad Rizkyputra Nova Wibawa
A11.2022.14438
A11.4212
*/

#include <iostream>
#include <algoritm>

using namespace std;

bool isEven(int num) {
    if (num % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool isOdd(int num) {
    if (num % 2 != 0) {
        return true;
    }
    else {
        return false;
    }
}

bool isFactor(int num, int factor) {
    if (num % factor == 0) {
        return true;
    }
    else {
        return false;
    }
}

int search(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

bool isfound(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return true;
        }
    }
    return false;

int sumeven(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int sumodd(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}


int main() {
    int a, b;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    int maksimum = max(a, b);
    cout << "Nilai maksimum adalah: " << maksimum << endl;
    return 0;

  int a, b;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    int minimum = min(a, b);
    cout << "Nilai minimum adalah: " << minimum << endl;
    return 0;

     int arr[10];
    int n;
    cout << "Masukkan jumlah elemen array (maksimal 10): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    int *p = max_element(arr, arr + n);
    cout << "Nilai maksimum adalah: " << *p << endl;
    return 0;

    int main() {
    int arr[10];
    int n;
    cout << "Masukkan jumlah elemen array (maksimal 10): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    int *p = min_element(arr, arr + n);
    cout << "Nilai minimum adalah: " << *p << endl;
    return 0;

     int n;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> n;
    if (isEven(n)) {
        cout << n << " adalah bilangan genap" << endl;
    }
    else {
        cout << n << " adalah bilangan ganjil" << endl;
    }
    return 0;

     int n;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> n;
    if (isOdd(n)) {
        cout << n << " adalah bilangan ganjil" << endl;
    }
    else {
        cout << n << " adalah bilangan genap" << endl;
    }
    return 0;

     int n, factor;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> n;
    cout << "Masukkan faktor yang ingin diperiksa: ";
    cin >> factor;
    if (isFactor(n, factor)) {
        cout << factor << " adalah faktor dari " << n << endl;
    }
    else {
        cout << factor << " bukan faktor dari " << n << endl;
    }
    return 0;

     int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 8;
    int index = search(arr, n, x);
    if (index == -1) {
        cout << "Nilai " << x << " tidak ditemukan dalam array" << endl;
    }
    else {
        cout << "Nilai " << x << " ditemukan pada indeks ke-" << index << endl;
    }
    return 0;

     int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 8;
    if (isfound(arr, n, x)) {
        cout << "Nilai " << x << " ditemukan dalam array" << endl;
    }
    else {
        cout << "Nilai " << x << " tidak ditemukan dalam array" << endl;
    }
    return 0;

      int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = sumeven(arr, n);
    cout << "Jumlah semua bilangan genap dalam array adalah: " << sum << endl;
    return 0;

      int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = sumodd(arr, n);
    cout << "Jumlah semua bilangan ganjil dalam array adalah: " << sum << endl;
    return 0;


}
