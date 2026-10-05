# Tugas 2 - Tipe Data dan Input

## Isi berkas

1. `sinilai_v01.cpp`
   - Program SiNilai v0.1.
   - Menambahkan data `program_studi` bertipe `std::string`.
   - Menambahkan data `semester` bertipe `int`.
   - Menerima input nama, program studi, semester, dan nilai.
   - Menentukan status lulus dari nilai.
   - Menggunakan `std::boolalpha` agar nilai boolean tampil sebagai `true/false`.

2. `tipe_dasar.cpp`
   - Menunjukkan cara mencetak `bool` sebagai `true/false`.
   - Membandingkan:
     `int nilai = 85;`
     dengan
     `int nilai{85.7};`
   - Baris `int nilai{85.7};` sengaja dikomentari karena akan ditolak compiler akibat narrowing conversion.

3. `contoh_masukan.txt`
   - Contoh input untuk menguji `sinilai_v01.cpp`.

## Penjelasan latihan mandiri

### 1. Menambahkan satu data lagi

Data tambahan yang dipilih adalah `program_studi` dengan tipe `std::string`.

```cpp
std::string program_studi;
```

Selain itu ditambahkan `semester` dengan tipe `int` karena semester berupa bilangan bulat.

```cpp
int semester{};
```

Pemilihan tipe data:
- `std::string` → teks.
- `int` → bilangan bulat.
- `double` → nilai yang dapat memiliki angka pecahan.
- `bool` → kondisi benar/salah.

### 2. Boolean true/false

Agar `bool` dicetak sebagai `true` atau `false`, digunakan:

```cpp
std::cout << std::boolalpha;
```

Tanpa `std::boolalpha`, nilai `true` biasanya tampil sebagai `1` dan `false` sebagai `0`.

### 3. `int nilai = 85` vs `int nilai{85.7}`

```cpp
int nilai = 85;
```

Diterima karena `85` memang bilangan bulat.

Sedangkan:

```cpp
int nilai{85.7};
```

ditolak oleh compiler C++ karena `85.7` bertipe `double` dan list initialization (`{}`) tidak mengizinkan penyempitan tipe (narrowing conversion) dari `double` ke `int`.

Ini merupakan salah satu keuntungan `{}`: compiler lebih ketat dan membantu mencegah kehilangan data.

### 4. Lima contoh nama variabel yang buruk

| Nama buruk | Masalah | Nama yang lebih jelas |
|---|---|---|
| `a` | Tidak menjelaskan isi data | `nama` |
| `x` | Maknanya tidak jelas | `nilai` |
| `data` | Terlalu umum | `program_studi` |
| `n` | Tidak jelas apakah nama, nilai, atau jumlah | `jumlah_mahasiswa` |
| `abc123` | Tidak menggambarkan isi variabel | `semester` |

## Cara compile dan menjalankan

Dengan g++:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic sinilai_v01.cpp -o sinilai_v01
./sinilai_v01
```

Untuk `tipe_dasar.cpp`:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic tipe_dasar.cpp -o tipe_dasar
./tipe_dasar
```

Jika ingin membuktikan error pada narrowing, hapus komentar pada:

```cpp
int nilai{85.7};
```

Lalu compile kembali. Compiler akan menolak deklarasi tersebut.

## Contoh hasil

Dengan input pada `contoh_masukan.txt`, hasilnya kira-kira:

```text
=== SiNilai v0.1 ===
Nama: Ahmad
Program studi: Teknik Informatika
Semester: 2
Nilai: 85

=== Hasil ===
Nama          : Ahmad
Program studi : Teknik Informatika
Semester      : 2
Nilai         : 85
Lulus         : true
```

