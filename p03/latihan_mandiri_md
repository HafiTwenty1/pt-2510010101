### 1. Mengubah jumlah detik menjadi jam, menit, detik

**Soal:**

> Tulis program yang membaca jumlah detik (int) lalu menampilkannya sebagai jam, menit, dan detik.

Misalnya pengguna memasukkan:

```text
3661
```

Maka hasilnya:

```text
1 jam 1 menit 1 detik
```

**Cara menghitung:**

* 1 jam = 3600 detik
* Sisa detik setelah mendapatkan jam dibagi 60 untuk mendapatkan menit
* Sisanya menjadi detik

Contoh C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int totalDetik;
    cin >> totalDetik;

    int jam = totalDetik / 3600;
    int sisa = totalDetik % 3600;
    int menit = sisa / 60;
    int detik = sisa % 60;

    cout << jam << " jam "
         << menit << " menit "
         << detik << " detik" << endl;

    return 0;
}
```

---

### 2. Menampilkan hasil bagi dan sisa

**Soal:**

> Tulis program yang membaca dua bilangan bulat lalu menampilkan hasil bagi dan sisanya.

Contoh soal:

```text
17 dibagi 5
```

Hasil:

```text
Hasil bagi = 3
Sisa = 2
```

Karena:

**17 ÷ 5 = 3 sisa 2**

Di C++, gunakan:

* `/` untuk mencari **hasil bagi**
* `%` untuk mencari **sisa**

Contoh:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    cout << "Hasil bagi = " << a / b << endl;
    cout << "Sisa = " << a % b << endl;

    return 0;
}
```

---

### 3. Mengubah program Nilai v0.2

**Soal:**

> Ubah Nilai v0.2 supaya juga menampilkan selisih antara nilai akhir dan rerata polos. Kapan keduanya sama persis?

Artinya, program **Nilai v0.2** yang sebelumnya sudah dibuat harus ditambahkan perhitungan:

```text
Selisih = Nilai akhir - Rerata polos
```

Misalnya:

```text
Nilai akhir = 83.975
Rerata polos = 85.875
```

Maka:

```text
Selisih = 83.975 - 85.875
        = -1.900
```

Jadi bisa ditampilkan:

```text
Nilai akhir  : 83.975
Rerata polos : 85.875
Selisih      : -1.900
```

**Pertanyaan pentingnya:**

> Kapan keduanya sama persis?

Jawabannya adalah ketika:

```text
Nilai akhir = Rerata polos
```

atau:

```text
Nilai akhir - Rerata polos = 0
```

Jadi program perlu menambahkan:

```cpp
double selisih = nilaiAkhir - rerataPolos;

cout << "Selisih: " << selisih << endl;
```

Kalau ingin mengecek apakah sama:

```cpp
if (selisih == 0) {
    cout << "Nilai akhir dan rerata polos sama." << endl;
}
```

**Catatan:** karena menggunakan angka desimal (`double`), dalam praktik pemrograman lebih aman menggunakan toleransi daripada langsung `== 0`.

---

### 4. Membandingkan C++ dengan Python

**Soal:**

> Ambil tiga ekspresi dari `prioritas.cpp`, terjemahkan ke Python, jalankan, dan catat mana yang hasilnya berbeda dari C++ beserta alasannya.

Ini tugas untuk memahami **perbedaan aturan operasi C++ dan Python**.

Misalnya dari `prioritas.cpp` terdapat ekspresi:

```cpp
5 / 2
```

Di **C++**, kalau keduanya bilangan `int`:

```cpp
5 / 2 = 2
```

Sedangkan di **Python**:

```python
5 / 2
```

hasilnya:

```text
2.5
```

Jadi ini merupakan salah satu contoh ekspresi yang **hasilnya berbeda**.

Contoh lainnya:

### C++

```cpp
5 / 2
```

Hasil:

```text
2
```

### Python

```python
5 / 2
```

Hasil:

```text
2.5
```

**Alasannya:** C++ melakukan pembagian integer jika kedua operand bertipe integer, sedangkan `/` di Python menghasilkan pembagian biasa berupa `float`.

---

## Jadi, yang harus dikerjakan

| No.   | Tugas                     | Intinya                                          |
| ----- | ------------------------- | ------------------------------------------------ |
| **1** | Detik → jam, menit, detik | Menggunakan `/` dan `%`                          |
| **2** | Pembagian 2 bilangan      | Cari hasil bagi dan sisa                         |
| **3** | Modifikasi Nilai v0.2     | Tambahkan `selisih = nilai akhir - rerata polos` |
| **4** | C++ vs Python             | Ambil 3 ekspresi dan bandingkan hasilnya         |

### Urutan pengerjaannya

**Tugas 1:** Buat program baru → input jumlah detik → tampilkan jam, menit, detik.

**Tugas 2:** Buat program baru → input 2 angka → tampilkan hasil bagi dan sisa.

**Tugas 3:** Buka program **Nilai v0.2** yang sudah dibuat sebelumnya → tambahkan perhitungan selisih.

**Tugas 4:** Buka **`prioritas.cpp`** → pilih 3 ekspresi → buat versi Python → jalankan keduanya → tulis ekspresi yang hasilnya berbeda dan alasannya.

Kalau kamu kirim **file `Nilai v0.2` dan `prioritas.cpp`**, saya bisa bantu **mengerjakan nomor 1–4 sampai kode C++/Python dan hasil outputnya siap dikumpulkan**.
