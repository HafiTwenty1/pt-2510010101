# D. Latihan Mandiri --- Pemrograman C++

Dokumen ini berisi jawaban untuk lima soal latihan mandiri tentang
perulangan (`for`, `while`, dan `do-while`) dalam bahasa C++.

## 1. Menghitung Jumlah 1 + 2 + ... + n

### Kode Program

``` cpp
#include <iostream>
using namespace std;

int main() {
    int n, jumlah = 0;

    cout << "Masukkan nilai n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        jumlah += i;
    }

    cout << "Jumlah = " << jumlah << endl;

    return 0;
}
```

### Contoh Pengujian

    Nilai n   Hasil jumlah
  --------- --------------
          1              1
          4             10
         10             55
        100           5050

### Langkah Flowchart

1.  Mulai.
2.  Masukkan nilai `n`.
3.  Atur `jumlah = 0` dan `i = 1`.
4.  Periksa apakah `i <= n`.
5.  Jika benar, hitung `jumlah = jumlah + i`, lalu `i = i + 1`. Kembali
    ke langkah pemeriksaan.
6.  Jika salah, cetak `jumlah`.
7.  Selesai.

------------------------------------------------------------------------

## 2. Menghitung Mundur dari n sampai 1

### Kode Program

``` cpp
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan nilai n: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }

    cout << "\nMulai!" << endl;

    return 0;
}
```

### Bagian Kepala `for`

-   `int i = n` memulai hitungan dari nilai `n`.
-   `i >= 1` membuat perulangan berjalan sampai angka 1.
-   `i--` mengurangi nilai `i` sebanyak 1 setiap perulangan.

Contoh jika `n = 5`, hasilnya:

``` text
5 4 3 2 1
Mulai!
```

------------------------------------------------------------------------

## 3. Mencari Nilai Tertinggi sampai Sentinel

Program membaca angka satu per satu. Input `-1` digunakan sebagai
sentinel untuk menghentikan input dan tidak ikut dihitung sebagai nilai.

### Kode Program

``` cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nilai;
    int tertinggi = INT_MIN;

    cout << "Masukkan nilai (-1 untuk berhenti): ";

    while (cin >> nilai && nilai != -1) {
        if (nilai > tertinggi) {
            tertinggi = nilai;
        }

        cout << "Masukkan nilai berikutnya: ";
    }

    if (tertinggi == INT_MIN) {
        cout << "Belum ada nilai yang dimasukkan." << endl;
    } else {
        cout << "Nilai tertinggi = " << tertinggi << endl;
    }

    return 0;
}
```

### Penjelasan

`INT_MIN` merupakan nilai integer terkecil yang tersedia pada sistem.
Nilai ini digunakan sebagai nilai awal agar angka pertama yang
dimasukkan dapat menjadi nilai tertinggi. Ketika pengguna memasukkan
`-1`, perulangan berhenti.

------------------------------------------------------------------------

## 4. Menghitung Pilihan Menu yang Tidak Dikenal

Program menu berikut menghitung berapa kali pengguna memasukkan pilihan
yang tidak tersedia. Program berhenti ketika pengguna memilih `0`.

### Kode Program

``` cpp
#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int salah = 0;

    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Pilihan satu" << endl;
        cout << "2. Pilihan dua" << endl;
        cout << "0. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Anda memilih pilihan satu." << endl;
                break;

            case 2:
                cout << "Anda memilih pilihan dua." << endl;
                break;

            case 0:
                cout << "Keluar dari program." << endl;
                break;

            default:
                salah++;
                cout << "Pilihan tidak dikenal." << endl;
        }
    } while (pilihan != 0);

    cout << "Jumlah pilihan salah: " << salah << endl;

    return 0;
}
```

### Penjelasan

Variabel `salah` bertambah satu setiap kali pengguna memasukkan pilihan
yang tidak tersedia. Perulangan `do-while` akan terus menampilkan menu
selama pilihan bukan `0`.

Catatan: kode ini merupakan contoh menu sederhana. Jika tersedia file
`do_while_menu.cpp` dari praktikum, sesuaikan bagian menu dengan kode
asli tersebut.

------------------------------------------------------------------------

## 5. Membuat Tabel Perkalian 1 sampai n

### Kode Program

``` cpp
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan nilai n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i << " x " << j
                 << " = " << i * j << "\t";
        }

        cout << endl;
    }

    return 0;
}
```

### Contoh Hasil jika n = 3

``` text
1 x 1 = 1    1 x 2 = 2    1 x 3 = 3
2 x 1 = 2    2 x 2 = 4    2 x 3 = 6
3 x 1 = 3    3 x 2 = 6    3 x 3 = 9
```

### Langkah Flowchart

1.  Mulai.
2.  Masukkan nilai `n`.
3.  Atur `i = 1`.
4.  Periksa apakah `i <= n`. Jika salah, selesai.
5.  Atur `j = 1`.
6.  Periksa apakah `j <= n`.
7.  Jika benar, cetak hasil `i x j`, lalu tambah `j = j + 1`. Kembali ke
    pemeriksaan `j <= n`.
8.  Jika `j > n`, pindah ke baris berikutnya dan tambah `i = i + 1`.
9.  Kembali ke pemeriksaan `i <= n`.

Perulangan `for` bagian luar mengatur baris, sedangkan perulangan `for`
bagian dalam mengatur kolom.

------------------------------------------------------------------------

## Kesimpulan

Kelima latihan ini menerapkan konsep perulangan dalam C++. Perulangan
`for` digunakan untuk jumlah yang terstruktur dan hitung mundur, `while`
digunakan untuk membaca input sampai sentinel, sedangkan `do-while`
digunakan untuk menu yang harus ditampilkan setidaknya satu kali.
Perulangan bersarang digunakan untuk menghasilkan tabel perkalian.
