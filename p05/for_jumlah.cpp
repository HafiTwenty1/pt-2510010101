#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int jumlah = 0;
    cout << "Berapa nilai yang akan dimasukkan? ";
    cin >> jumlah;

    if (jumlah <= 0) {
        cout << "Jumlah nilai harus lebih dari 0.\n";
        return 0;
    }

    double total = 0.0;
    int banyak_lulus = 0;
    for (int i = 1; i <= jumlah; i++) {
        double nilai = 0.0;
        cout << "Nilai ke-" << i << ": ";
        cin >> nilai;
        total += nilai;
        if (nilai >= 60.0) {
            banyak_lulus++;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Total          : " << total << "\n";
    cout << "Rata-rata      : " << total / jumlah << "\n";
    cout << "Banyak lulus   : " << banyak_lulus << "\n";
    return 0;
}
