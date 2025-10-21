# 🏦 ZaraBank Console — E-Banking Simulation

> **Proyek Bahasa C** — Aplikasi konsol interaktif yang memvisualisasikan layanan e-banking lengkap dengan navigasi berbasis keyboard, validasi berlapis, dan bukti transaksi real-time.

![C](https://img.shields.io/badge/C-ISO%2FIEC%2098999-blue?style=for-the-badge&logo=c)
![Windows Console](https://img.shields.io/badge/Windows%20Console-0078D6?style=for-the-badge&logo=windows)
![Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)

---

## 🌟 Ringkasan Proyek

**ZaraBank** menghadirkan pengalaman perbankan digital di lingkungan terminal Windows. Seluruh tampilan dibangun menggunakan ASCII art, `gotoxy`, dan kontrol warna, sementara logika bisnis menangani autentikasi, transfer, top up e-wallet, cek saldo, dan manajemen akun dalam satu alur terpadu.

### 🎯 Fokus Pembelajaran
- Mengorkestrasi antarmuka teks dinamis dengan buffer konsol Windows
- Mengelola state user (username, PIN, saldo) menggunakan file teks terstruktur
- Menerapkan validasi input komprehensif untuk mencegah data tidak sah
- Menyusun modul transaksi dan cetak resi dengan pemisahan logika yang jelas

---

## 📌 Modul Utama

| Berkas | Peran |
|--------|-------|
| `main.c` | Entry point yang memanggil `welcome()` dari modul tampilan |
| `tampilan.c` | Pusat logika UI/UX: navigasi menu, validasi, transaksi, cetak resi |
| `color.c` | Utilitas `gotoxy` dan `set()` untuk mengatur posisi & warna konsol |
| `coba.c` | Eksperimen layout frame dan handler navigasi versi awal |
| `AJENG AZZAHRA MAHARANI FLOWCHART.drawio` | Blueprint alur sistem ZaraBank |

---

## ✨ Fitur Inti

### 🎬 Opening & Navigasi Keyboard
- **`welcome()`** menampilkan splash screen animasi, progress bar “Loading”, dan langsung mengarahkan ke halaman utama.
- Navigasi mengandalkan tombol panah (`← → ↑ ↓`) dan `Enter` untuk memilih, `Esc` untuk kembali, dengan highlight visual pada pilihan aktif.

### 🔐 Autentikasi & Registrasi
- **Login** menvalidasi kombinasi nomor rekening dan PIN dari `akun.txt`.
- **Registrasi** mengumpulkan nama, nomor telepon, gender, umur, kota, nomor rekening (12 digit), dan PIN (6 digit) dengan validasi ketat (kapitalisasi, range umur, pola angka).
- Data baru tersimpan di `regist.txt`, `akun.txt`, serta sinkronisasi nomor telepon ke `dana.txt` dan `shopeepay.txt`.

### 🏠 Beranda & Menu Utama
- Setelah login, beranda memecah fitur menjadi dua blok: **Menu Transaksi** dan **Setting Akun**.
- Menu transaksi mencakup **Transfer**, **Isi Saldo**, **Cek Saldo**, dan **Top Up E-Wallet**.

### 💸 Transfer Antar Rekening
- Opsi nominal cepat (Rp50K, Rp100K, Rp300K) plus input custom hingga Rp50 juta.
- Setiap transaksi mewajibkan verifikasi PIN ulang, mengurangi saldo pengirim, dan mencatat mutasi di `transfer.txt`.
- Bukti transaksi digital (`bukti()`) menampilkan detail pengirim, penerima, jumlah, serta timestamp lokal.

### 💰 Isi & Cek Saldo
- **Isi Saldo** menerima nominal dengan batas valid (≥50K dan ≤50 juta) dan mengakumulasi saldo pengguna.
- **Cek Saldo** membaca data dari `akun.txt` dan menampilkan ringkasan rekening secara estetis.

### 📱 Top Up E-Wallet
- Mendukung **Dana** dan **ShopeePay** dengan validasi nama dan nomor telepon yang telah terhubung di berkas wallet.
- Nominal top up mengikuti batas yang sama dengan modul transfer.
- Struk top up memuat identitas e-wallet penerima untuk konfirmasi.

### 🧾 Bukti Transaksi Terintegrasi
- Variabel global `invoice` menentukan template struk (transfer, isi saldo, top up Dana/ShopeePay).
- Menggunakan `time()` untuk menempelkan tanggal dan jam transaksi secara real-time.

### 🧑‍💻 Pengaturan Akun
- **Edit Akun** memungkinkan perubahan nomor rekening dan PIN dengan validasi unik & re-write `akun.txt` secara aman.
- **Hapus Akun** (dalam modul lanjutan) mempersiapkan pengelolaan lifecycle user.

---

## 🛡 Validasi & Proteksi Input

- **Nama & Kota:** Minimal 3 karakter, kapitalisasi awal tiap kata, tanpa spasi ganda atau huruf berulang tiga kali.
- **Nomor Telepon & Rekening:** Wajib numerik; rekening harus 12 digit unik, dicek lintas berkas.
- **PIN:** 6 digit numerik unik, diverifikasi agar tidak menumpuk dengan PIN eksisting.
- **Gender:** Hanya menerima `L` / `P` (case-insensitive).
- **Umur:** Range 17–65 tahun dengan dukungan pesan kesalahan interaktif.
- **Nominal Uang:** Menghindari leading zero, melarang spasi, dan membatasi nominal Rp50.000–Rp50.000.000.

Pesan kesalahan muncul berulang dengan efek blinking untuk menarik perhatian pengguna sebelum input diulang.

---

## 🗃️ Penyimpanan Data

| Berkas | Fungsi | Format |
|--------|--------|--------|
| `akun.txt` | Kredensial & saldo nasabah | `Nama#NoRek#PIN#Saldo` |
| `regist.txt` | Profil registrasi | `Nama#Telepon#Gender#Umur#Kota` |
| `dana.txt`, `shopeepay.txt` | Nomor e-wallet terhubung | `Telepon` per baris |
| `transfer.txt` | Riwayat transfer | `NamaTujuan#Rekening#Nominal` |

Semua file diproses dengan `fscanf`/`fprintf` untuk menjaga format delimiter `#` dan memudahkan pembacaan ulang.

---

## 🧭 Alur Pengguna

1. **Welcome Screen** → Splash logo & loading bar.
2. **Halaman Utama** → Pilih Sign In / Registrasi / About.
3. **Login** atau **Registrasi** → Validasi berlapis, data tersimpan.
4. **Beranda** → Akses menu transaksi atau pengaturan akun.
5. **Transaksi** (transfer/isi saldo/top up) → Verifikasi PIN → Cetak bukti transaksi.
6. **Cek Saldo** atau **Setting Akun** → Tinjau / ubah informasi pengguna.
7. `Esc` dari menu apa pun membawa pengguna ke level sebelumnya hingga keluar aplikasi.

---

## 🛠 Teknologi & Ketergantungan

- **Bahasa:** C (ANSI C dengan ekstensi WinAPI)
- **Header:** `stdio.h`, `conio.h`, `windows.h`, `string.h`, `stdlib.h`, `time.h`
- **Lingkungan:** Windows Console (mengandalkan `SetConsoleCursorPosition` dan `SetConsoleTextAttribute`)
- **Pengaturan Layar:** Buffer 146×35 karakter sesuai rekomendasi komentar header

---

## 🧱 Struktur Proyek

```
BISMILLAH/
├── .vscode/
│   └── (konfigurasi editor)
├── AJENG AZZAHRA MAHARANI FLOWCHART.drawio
├── akun.txt
├── coba.c
├── color.c
├── dana.txt
├── main.c
├── main.exe
├── regist.txt
├── shopeepay.txt
├── tampilan.c
├── transfer.txt
└── (binary pendukung: color.exe, dll)
```

---

## 📈 Ide Pengembangan Lanjutan

- Enkripsi PIN sebelum disimpan pada `akun.txt` untuk keamanan tambahan.
- Modularisasi `tampilan.c` menjadi beberapa file (UI, validation, transaction) agar lebih mudah dirawat.
- Penambahan simulasi biaya admin atau histori transaksi lengkap dengan pagination.
- Implementasi “Hapus Akun” yang menata ulang seluruh berkas terkait secara konsisten.
- Integrasi unit test sederhana untuk fungsi validasi (nama, nomor, nominal).

---

## 👤 Pengembang

**Ajeng Azzahra Maharani** — Perancang UX konsol, pengembang logika transaksi, dan penulis dokumentasi alur.

---

<div align="center">

### 💳 Selamat bertransaksi dengan ZaraBank, bank digital dalam genggaman konsol!

</div>
