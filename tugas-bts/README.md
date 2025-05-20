# Dokumentasi Binary Tree Search (BST)

## Deskripsi
Program ini mengimplementasikan Binary Search Tree dalam C++ dengan empat operasi utama. Program dibuat untuk memahami konsep dasar struktur data tree dan operasinya.

## Komponen Program

### 1. Struktur Node
```cpp
struct Node {
    int data;      // Nilai yang disimpan
    Node* left;    // Pointer ke anak kiri
    Node* right;   // Pointer ke anak kanan
};
```

### 2. Fungsi-fungsi Utama & Algoritma

#### findMin()
- **Tujuan**: Mencari nilai terkecil dalam BST
- **Algoritma**: 
  1. Cek apakah tree kosong
  2. Jika tidak kosong, telusuri ke kiri sampai NULL
  3. Return node terakhir yang ditemukan
- **Kompleksitas**: O(h)

#### findMax()
- **Tujuan**: Mencari nilai terbesar dalam BST
- **Algoritma**:
  1. Cek apakah tree kosong
  2. Jika tidak kosong, telusuri ke kanan sampai NULL
  3. Return node terakhir yang ditemukan
- **Kompleksitas**: O(h)

#### height()
- **Tujuan**: Menghitung tinggi/kedalaman tree
- **Algoritma**:
  1. Jika node kosong, return 0
  2. Hitung tinggi subtree kiri dan kanan secara rekursif
  3. Return nilai maksimum + 1
- **Kompleksitas**: O(n)

#### countLeaves()
- **Tujuan**: Menghitung jumlah node daun
- **Algoritma**:
  1. Jika node kosong, return 0
  2. Jika node adalah daun, return 1
  3. Return jumlah daun di subtree kiri + kanan
- **Kompleksitas**: O(n)

## Contoh Penggunaan

### Input Tree
```
       50
      /  \
     30   70
    /  \  /  \
   20  40 60  80
```

### Output Program
```bash
Nilai minimum: 20
Nilai maksimum: 80
Tinggi tree: 3
Jumlah daun: 4
```

## Cara Menjalankan

1. Buka terminal di VS Code
2. Compile program:
```bash
g++ main.cpp -o main
```
3. Jalankan program:
```bash
./main
```

## Spesifikasi Teknis
- **Bahasa**: C++
- **Compiler**: g++
- **IDE**: Visual Studio Code
- **Platform**: macOS

## Info Akademik
- **Mata Kuliah**: Struktur Data
- **Semester**: 2
- **Topik**: Binary Search Tree

## Requirements
- C++ Compiler (g++)
- Visual Studio Code
- Terminal