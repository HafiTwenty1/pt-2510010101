#include <iostream>
using namespace std;

int main() {
    int pilihan = 0;
    cout << "=== Menu SiNilai ===\n";
    cout << "1. Tampilkan kartu nilai\n";
    cout << "2. Hitung ulang\n";
    cout << "3. Keluar\n";
    cout << "4. Tentang program\n";
    cout << "Pilihan: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Menampilkan kartu nilai...\n";
            break;
        case 2:
            cout << "Menghitung ulang...\n";
            break;
        case 3:
            cout << "Sampai jumpa.\n";
            break;
        case 4:
            cout << "SiNilai v0.3 - konversi nilai akhir ke huruf mutu.\n";
            break;
        default:
            cout << "Pilihan tidak dikenal.\n";
    }
    return 0;
}
