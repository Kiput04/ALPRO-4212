/*
Muhammad Rizkyputra Nova Wibawa
A11.2022.14438
A11.4212
*/

#include <iostream>

using namespace std;

int jmlhrek (int i){
    if (i==1){
        return 1;
    }
    else {
        return i + jmlhrek(i-1);
    }
}
int penguranganrek (int a,int b){
    if (b==0){
        return a;
    }
    else{
        return penguranganrek (a-1,b-1);
    }
}
int perkalianrek (int a,int b){
    if (b==0){
        return 0;
    }
    else{
        return a + perkalianrek (a,b-1);
    }
}
int pembagianrek (int a,int b){
    if (a < b){
        return 0;
    }
    else{
        return 1 + pembagianrek (a-b,b);
    }
}
int pangkatrek (int bas,int pang){
    if (pang==0){
        return 1;
    }
    else{
        return bas * pangkatrek (bas,pang-1);
    }
}


int main(){
   // PENJUMLAHAN
    int nilai;
    cout << "Masukkan Angka : " << endl;
    cin >> nilai;

    int hasil = jmlhrek (nilai);
    cout << "Hasil penjumlahan :" << hasil << endl;

    // PENGURANGAN
    int nilai1,nilai2;
    cout << "Masukkan nilai pengurangan : " << endl;
    cin >> nilai1;
    cout << "Masukkan nilai pengurangan : " << endl;
    cin >> nilai2;

    int hslnil = penguranganrek (nilai1,nilai2);
    cout << "Hasil Pengurangan : " << hslnil << endl;

    //PERKALIAN
    int angka1,angka2;
    cout << "Masukkan angka perkalian :" << endl;
    cin >> angka1;
    cout << "Masukkan angka perkalian :" << endl;
    cin >> angka2;

    int kalirek = perkalianrek (angka1,angka2);
    cout << "hasil perkalian : " << kalirek << endl;

    //PEMBAGIAN
    int bagi1,bagi2;
    cout << "Masukkan bilangan pembagian :" << endl;
    cin >> bagi1;
    cout << "Masukkan bilangan pembagian :" << endl;
    cin >> bagi2;

    int hslbagi = pembagianrek (bagi1,bagi2);
    cout << "hasil pembagian : " << hslbagi << endl;

    //PANGKAT
    int bilangan1,pangkat2;
    cout << "masukkan bilangan : " << endl;
    cin >> bilangan1;
    cout << "masukkan pangkat  : " << endl;
    cin >> pangkat2;

    int hslpangkat = pangkatrek (bilangan1,pangkat2);
    cout << "hasil pangkat :" << hslpangkat << endl;


    return 0;
}
