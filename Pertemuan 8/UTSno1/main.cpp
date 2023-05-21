#include <iostream>
#include <vector>

using namespace std;

bool is_odd(int number) {
    // Fungsi untuk memeriksa apakah suatu bilangan adalah ganjil
    return number % 2 != 0;
}

void find_largest_odd(const vector<int>& numbers) {
    // Fungsi untuk mencari nilai ganjil terbesar dalam suatu deret bilangan bulat dengan jumlah elemen dinamis
    int largest_odd = INT_MIN;
    int largest_odd_index = -1;
    for (int i = 0; i < numbers.size(); i++) {
        if (is_odd(numbers[i]) && (numbers[i] > largest_odd)) {
            largest_odd = numbers[i];
            largest_odd_index = i;
        }
    }
    if (largest_odd_index == -1) {
        cout << "Tidak ada bilangan ganjil dalam deret ini." << endl;
    } else {
        cout << "Nilai ganjil terbesar: " << largest_odd << endl;
        cout << "Index: " << largest_odd_index << endl;
    }
}

int main() {
    // Contoh penggunaan program
    vector<int> numbers = { -6, 7, 4, 3, 2 };
    find_largest_odd(numbers);
    return 0;
}
