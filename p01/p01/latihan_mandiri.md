soal Latihan Mandiri:

1. **`rerata.cpp` (Modifikasi ke 5 nilai)**

* **Bagian yang diubah:** Deklarasi variabel (menambah 2 variabel), perintah input `cin` (membaca 5 nilai), dan rumus rata-rata (menjumlahkan 5 nilai lalu dibagi `5.0`).


* **Jumlah tempat terpengaruh:** 3 bagian utama pada kode.




2. **`hello.cpp` (Menghapus tanda kutip penutup)**

* **Pesan error:** `error: missing terminating " character` pada **baris 5**.


* **Penyebab:** Terjadi kesalahan sintaks (*syntax error*) karena string teks tidak ditutup dengan benar.




3. **`hello.cpp` (Menghapus `#include <iostream>`)**

* **Pesan error:** `'cout' was not declared in this scope` dan `'endl' was not declared in this scope`.


* **Tahap yang gagal:** Tahap **Kompilasi / Semantic Analysis (Symbol Lookup)**.


* **Perbedaan:** Soal 2 gagal akibat kesalahan struktur tata bahasa (sintaks), sedangkan Soal 3 gagal karena *compiler* tidak mengenali kata `cout` dan `endl` akibat perpustakaan dasarnya dihapus.




4. **Kompilasi tanpa `-Wall -Wextra**`

* **Pesan yang hilang:** Peringatan (*warnings*) terkait potensi kesalahan logika, seperti variabel terbuang atau belum diberi nilai awal.


* **Kenapa merugikan:** Tanpa peringatan tersebut, kode bisa saja lolos kompilasi tetapi mengalami *crash* atau menghasilkan output salah saat dijalankan, sehingga kesalahan jauh lebih sulit dilacak (*debug*).
