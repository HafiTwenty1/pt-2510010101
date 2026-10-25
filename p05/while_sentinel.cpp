#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double total = 0.0;
    int banyak = 0;
    double nilai = 0.0;

    cout << "Masukkan nilai satu per satu, angka negatif untuk berhenti.\n";
    cout << "Nilai: ";
    cin >> nilai;
    while (nilai >= 0.0) {
        total += nilai;
        banyak++;
        cout << "Nilai: ";
        cin >> nilai;
    }

    cout << "Banyak nilai : " << banyak << "\n";
    if (banyak > 0) {
        cout << fixed << setprecision(2);
        cout << "Rata-rata    : " << total / banyak << "\n";
    } else {
        cout << "Tidak ada nilai yang dimasukkan.\n";
    }
    return 0;
}
