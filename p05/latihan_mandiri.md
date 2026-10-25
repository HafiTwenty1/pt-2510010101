#include <iostream>
using namespace std;

void latihan1() {
    int n = 0;
    cout << "Masukkan n: ";
    cin >> n;
    if (n < 1) {
        cout << "n harus minimal 1.\n";
        return;
    }

    long long total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    cout << "Jumlah 1 sampai " << n << " = " << total << "\n";
}

void latihan2() {
    int n = 0;
    cout << "Masukkan angka awal: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        cout << i << "\n";
    }
    cout << "Mulai!\n";
}

void latihan3() {
    double nilai = 0.0;
    double tertinggi = 0.0;
    int banyak = 0;

    cout << "Masukkan nilai (angka negatif untuk berhenti).\n";
    cout << "Nilai: ";
    cin >> nilai;
    while (nilai >= 0.0) {
        if (banyak == 0 || nilai > tertinggi) {
            tertinggi = nilai;
        }
        banyak++;
        cout << "Nilai: ";
        cin >> nilai;
    }

    if (banyak == 0) {
        cout << "Tidak ada nilai yang dimasukkan.\n";
    } else {
        cout << "Nilai tertinggi: " << tertinggi << "\n";
    }
}

void latihan4() {
    int pilihan = 0;
    int jumlah_tidak_dikenal = 0;
    do {
        cout << "\n=== Menu Latihan 4 ===\n";
        cout << "1. Tampilkan pesan\n";
        cout << "2. Bantuan\n";
        cout << "3. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Halo!\n";
                break;
            case 2:
                cout << "Pilih 1, 2, atau 3.\n";
                break;
            case 3:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak dikenal.\n";
                jumlah_tidak_dikenal++;
                break;
        }
    } while (pilihan != 3);

    cout << "Jumlah pilihan tidak dikenal: " << jumlah_tidak_dikenal << "\n";
}

void latihan5() {
    int n = 0;
    cout << "Masukkan n: ";
    cin >> n;
    if (n < 1) {
        cout << "n harus minimal 1.\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        cout << "\n";
    }
}

int main() {
    int pilihan = 0;
    do {
        cout << "\n=== LATIHAN MANDIRI P05: PERULANGAN ===\n";
        cout << "1. Jumlah 1 sampai n\n";
        cout << "2. Hitung mundur\n";
        cout << "3. Mencari nilai tertinggi\n";
        cout << "4. Menghitung pilihan menu yang salah\n";
        cout << "5. Tabel perkalian 1 sampai n\n";
        cout << "0. Keluar\n";
        cout << "Pilih latihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: latihan1(); break;
            case 2: latihan2(); break;
            case 3: latihan3(); break;
            case 4: latihan4(); break;
            case 5: latihan5(); break;
            case 0: cout << "Program latihan selesai.\n"; break;
            default: cout << "Pilihan tidak tersedia. Silakan pilih 0-5.\n"; break;
        }
    } while (pilihan != 0);

    return 0;
}

