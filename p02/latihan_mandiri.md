1. **Menambahkan Data Baru ke SiNilai v0.1**

* **Program Studi:** Gunakan tipe data `string` (misal: `string prodi = "Informatika";`) karena menyimpan kumpulan karakter/teks.


* **Semester:** Gunakan tipe data `int` (misal: `int semester = 3;`) karena menyatakan bilangan bulat.




2. **Mencetak `lulus` sebagai `true`/`false` pada `tipe_dasar.cpp**`

* **Penyelesaian:** Tambahkan manipulator `boolalpha` pada perintah pencetakan `cout` (contoh: `cout << boolalpha << lulus;`).


* **Hasil:** Nilai *boolean* yang semula dicetak dalam angka (`1` atau `0`) akan ditampilkan sebagai teks (`true` atau `false`).




3. **Perbedaan `int nilai = 85.7;` vs `int nilai{85.7};**`

* **`int nilai = 85.7;` (Inisialisasi Tradisional):** *Compiler* mengizinkan konversi otomatis (*implicit conversion*) dengan memotong angka di belakang koma (pemotongan/konversi menyempit), sehingga nilai yang tersimpan menjadi `85`.


* **`int nilai{85.7};` (Uniform/List Initialization C++11):** *Compiler* menolak pemotongan data dan akan memunculkan pesan **error/warning** (*narrowing conversion error*) karena angka desimal dicoba dimasukkan ke tipe bilangan bulat.




4. **5 Contoh Nama Variabel Buruk & Usulan yang Lebih Jelas**

* `a` atau `x` $\rightarrow$ Ubah menjadi `total_nilai` atau `jumlah_mahasiswa` (lebih mendeskripsikan isi data).
* `temp` $\rightarrow$ Ubah menjadi `suhu_ruangan` atau `nilai_sementara` (menghindari nama yang terlalu umum/ambigu).
* `data1` $\rightarrow$ Ubah menjadi `nama_lengkap` (jelas menyatakan jenis data).
* `st` $\rightarrow$ Ubah menjadi `status_kelulusan` (mencegah singkatan yang membingungkan).
* `n` $\rightarrow$ Ubah menjadi `jumlah_elemen` (memperjelas arti nilai angka tersebut).
