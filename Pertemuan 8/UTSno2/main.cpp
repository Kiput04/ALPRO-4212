#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int>& numbers) {
    // Metode pengurutan Bubble Sort
    int n = numbers.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] < numbers[j+1]) {
                // Swap
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
}

void selection_sort(vector<int>& numbers) {
    // Metode pengurutan Selection Sort
    int n = numbers.size();
    for (int i = 0; i < n - 1; i++) {
        int max_index = i;
        for (int j = i+1; j < n; j++) {
            if (numbers[j] > numbers[max_index]) {
                max_index = j;
            }
        }
        // Swap
        int temp = numbers[i];
        numbers[i] = numbers[max_index];
        numbers[max_index] = temp;
    }
}

int main() {
    // Contoh penggunaan program
    vector<int> numbers = { 5, 4, 3, 2, 2, 1, 1 };

    cout << "Sebelum diurutkan: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    bubble_sort(numbers);
    cout << "Setelah diurutkan menggunakan Bubble Sort: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    selection_sort(numbers);
    cout << "Setelah diurutkan menggunakan Selection Sort: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
