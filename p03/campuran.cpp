// Dibuat ulang oleh saya (berkas asli tidak ada di halaman yang dilampirkan)
#include <iostream>
using namespace std;

int main() {
    int uts = 75;
    int uas = 80;
    double rerata_1 = (uts + uas) / 2;      // int/int -> 77, baru disimpan ke double (77.0)
    double rerata_2 = (uts + uas) / 2.0;    // double -> 77.5
    double rerata_3 = (uts + uas) * 0.5;    // double -> 77.5
    cout << "rerata_1 = " << rerata_1 << "\n";
    cout << "rerata_2 = " << rerata_2 << "\n";
    cout << "rerata_3 = " << rerata_3 << "\n";

    int bulat = 7;
    double pecahan = 0.5;
    cout << "bulat / 2   + pecahan = " << bulat / 2 + pecahan << "\n";
    cout << "bulat / 2.0 + pecahan = " << bulat / 2.0 + pecahan << "\n";
    return 0;
}
