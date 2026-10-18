**1. Flowchart huruf mutu:** gambar ada di dokumen Pertemuan 4 (Latihan 1). Yang berulang: satu pola keputusan `nilai_akhir >= batas?`. Jalan "ya" mengisi huruf lalu ke Selesai, jalan "tidak" turun ke keputusan berikutnya. Hanya angka batas dan hurufnya yang berganti.

**2. Terbesar dari tiga bilangan**
```cpp
double terbesar = a;
if (b > terbesar) { terbesar = b; }
if (c > terbesar) { terbesar = c; }
cout << "Terbesar: " << terbesar << "\n";
```
Cara lain: `std::max(a, std::max(b, c))`, atau if-else bertingkat dengan `a >= b && a >= c`.

**3. Tahun kabisat**
```cpp
bool kabisat = (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
cout << tahun << (kabisat ? " kabisat\n" : " bukan kabisat\n");
```
Hasil: 1900 bukan, 2000 kabisat, 2024 kabisat, 2026 bukan.

**4. switch dengan char**
```cpp
char pilihan;
cin >> pilihan;
switch (pilihan) {
    case '1': cout << "Menampilkan kartu nilai...\n"; break;
    case '2': cout << "Menghitung ulang...\n"; break;
    case '3':
    case 'k': cout << "Sampai jumpa.\n"; break;
    default:  cout << "Pilihan tidak dikenal.\n";
}
```
Yang berubah pada `case`: ditulis dengan kutip tunggal (`'1'`, bukan `1`), karena yang dibandingkan karakter, bukan angka.

**5. bertingkat.cpp dengan switch**
```cpp
switch (static_cast<int>(nilai) / 10) {
    case 10: case 9: case 8: cout << "A\n"; break;
    case 7: cout << "B\n"; break;
    case 6: cout << "C\n"; break;
    default: cout << "D\n";
}
```
Untuk 79.9 hasilnya sama, yaitu B. `static_cast<int>(79.9)` menjadi 79, dan 79 / 10 = 7 (pecahan dibuang), sehingga jatuh ke `case 7`. Ini sama untuk semua nilai 0 sampai 100 karena batasnya kelipatan 10. Bedanya: nilai di atas 109 (misal 115) jadi D di versi switch tetapi A di versi asli, dan batas seperti 75 (B+) tidak bisa diwakili.
