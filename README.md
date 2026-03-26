# Traffic-light-4-Arah-
Traffic Light 4 Arah menggunakan Arduino Uno dengan sistem GPIO.  Lampu bekerja secara otomatis dan bergantian (Utara, Timur, Selatan, Barat)  dengan timing sesuai ketentuan tanpa konflik antar simpang.

# 🚦 Sistem Traffic Light 4 Arah (Arduino Uno)

Project ini merupakan implementasi sistem lampu lalu lintas 4 arah menggunakan Arduino Uno dengan memanfaatkan pin GPIO. Sistem ini mengatur nyala LED (Merah, Kuning, Hijau) untuk setiap arah secara bergantian dan otomatis.

---

## Deskripsi Sistem

Sistem terdiri dari 4 arah:
- Utara
- Timur
- Selatan
- Barat

Setiap arah memiliki 3 lampu:
- Merah
- Kuning
- Hijau

Lampu bekerja secara berurutan:
**Utara → Timur → Selatan → Barat → ulangi (looping)**

---

## Cara Kerja

1. Semua lampu berada pada kondisi **merah (default)**
2. Salah satu arah akan aktif:
   - Lampu **hijau menyala selama 5 detik**
   - Dilanjutkan **kuning berkedip 3 kali**
   - Kemudian **kuning menyala selama 2 detik**
3. Setelah itu kembali ke **merah**
4. Sistem berpindah ke arah berikutnya
5. Proses berjalan terus menerus (loop)

---

## Konfigurasi Pin

| Arah | Merah | Kuning | Hijau |
|------|------|--------|-------|
| Utara | 2 | 3 | 4 |
| Timur | 5 | 6 | 7 |
| Selatan | 8 | 9 | 10 |
| Barat | 11 | 12 | 13 |

---

## Komponen yang Digunakan

- Arduino Uno
- LED (Merah, Kuning, Hijau)
- Resistor
- Breadboard
- Kabel jumper

---

## Konsep yang Digunakan

- GPIO (General Purpose Input Output)
- Struktur program Arduino (`setup()` dan `loop()`)
- Modularisasi menggunakan fungsi
- Logika kontrol sistem (sequential system)

---

## Fitur Sistem

- Sistem berjalan otomatis (looping)
- Tidak ada konflik lampu (tidak ada 2 hijau bersamaan)
- Menggunakan fungsi agar kode lebih rapi dan efisien
- Timing sesuai dengan ketentuan

---

## Tujuan

Project ini dibuat untuk memahami:
- Penggunaan pin GPIO pada Arduino
- Cara mengontrol perangkat elektronik sederhana (LED)
- Implementasi logika sistem dunia nyata (traffic light)

---

## Catatan

Simulasi dapat dibuat menggunakan Tinkercad, dan program diupload ke Arduino Uno untuk pengujian secara langsung.
