# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Mikhael Setia Budi</p>

## Dasar Teori

Array merupakan struktur data yang paling dasar. Berikut ini
adalah jenis-jenis array :

**1) Array Satu Dimensi**

Array satu dimensi adalah tipe variabel yang terdiri dari kumpulan data
dengan tipe yang sama yang disusun dalam satu baris atau satu dimensi. Setiap
elemen di dalam array memiliki sebuah indeks atau nomor yang digunakan
untuk mengakses elemen tersebut. Indeks dimulai dari 0 dan berakhir pada
jumlah elemen dikurangi satu.

Contohnya, sebuah array satu dimensi yang berisi bilangan bulat {1, 2,
3, 4, 5} memiliki lima elemen dan indeksnya dimulai dari 0. Indeks 0 adalah elemen pertama, indeks 1 adalah elemen kedua, dan seterusnya
hingga indeks 4 adalah elemen kelima.

Contoh :
```C++
#include <iostream>
using namespace std;
int main() {
int arr[5] = {9, 3, 5, 2, 1}; //deklarasi array
cout<< arr[1] << endl;
cout<< arr[4];
}
```

Output :
```C++
3
1
```

**2) Array Dua Dimensi**

Array dua dimensi adalah variabel yang terdiri dari kumpulan array satu dimensi dengan tipe sama yang disusun dalam baris dan kolom. Dalam array dua dimensi, setiap elemen memiliki dua indeks, yaitu indeks baris dan indeks kolom. Indeks baris menunjukkan posisi elemen dalam baris, sementara indeks kolom menunjukkan posisi elemen dalam kolom.

Contoh :
```C++
#include <iostream>
using namespace std;
int main() {
    int arr[2][2] = {{3, 2}, {2, 5}};
    for (int i=0; i<2; i++) { //baris
        for(int j=0; j<2; j++) { //kolom
            cout<< arr[i][j] << ends;
        };
        cout << endl;
    };
}
```

Output :
```C++
3 2
2 5
```

**3) Array Multidimensi**

Array multimedia memiliki kesamaan dengan array satu dimensi dan dua dimensi, tetapi kapasitas memori lebih besar. Array ini digunakan untuk merepresentasikan array dengan dimensi lebih dari dua atau array yang memiliki lebih dari dua indeks, seperti array tiga dimensi, array empat dimensi, array lima dimensi, dan seterusnya. 

Contoh :
```C++
#include <iostream>
using namespace std;
int main() {
    int arr[2][2][3] = {{{2, 8, 7}, {6, 5, 1}}, {{8, 5, 2}, {9, 2 ,7}}};
    for (int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            for(int k=0; k<3; k++) {
                cout<< arr[i][j][k] << ends;
            };
            cout<< endl;
        };
        cout<< endl;
    };
}
```

Output :
```C++
2 8 7
6 5 1
8 5 2
9 2 7
```

**4) Array Empat Dimensi**

Contoh :
```C++
int arr [3][2][4][4];
```

**5) Array Lima Dimensi**

Contoh :
```C++
int arr [2][4][4][3][3];
```

## Guided 

### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```
**Code 1**
```C++
#include <iostream>
using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. using namespace std digunakan untuk menggunakan namespace std.

**Code 2**
```C++
int main()
{
}
```
digunakan sebagai fungsi utama dari program C++. program berjalan dalam fungsi ini. jadi di dalam fungsi int main() semua program akan berjalan dalam fungsi int main().

**Code 3**
```C++
int arr[2][3][3];
```
kode yang digunakan untuk mendeklarasikan array tiga dimensi dengan tipe data integer (bilangan bulat) dengan ukurang 2x3x3.

**Code 4**
```C++
for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
```
Code diatas digunakan untuk menginput array. perulangan pertama pada variabel x dengan indeks 0 hingga 1 dikarenakan x < 2. jadi program akan berulang sampai mencapai 2 indeks yaitu indeks 0 dan 1. setiap perulangan selesai dieksekusi maka indek akan ditambah satu. begitupun dengan y dan z dengan indeks 0 hingga 2, jadi program akan berulang sampai mencampai indeks 2 yaitu indeks 0, 1, dan 2. setelah program dieksekusi maka akan mengulang dengan indeks ditambah satu. cout menampilkan pesan untuk meminta input elemen array pada posisi x, y, dan z yang sudah ditentukan. cin digunakan untuk mengambil input dari pengguna dan menyimpan dalam array pada posisi yang ditentukan oleh indeks x, y, dan z.

**Code 5**
```C++
for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
```
code diatas digunakan untuk menampilkan output array dengan indeks x akan berulang sampai mencapai indkes 1, lalu untuk y dan z akan berulang sampai indeks 2. setiap perulangan yang dieksekusi akan ditambah satu. cout digunakan untuk menampilkan output data array yang telah diinputkan oleh user sesuai posisi x, y, dan z yang sudah ditentukan.

**Code 6**
```C++
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
```
code diatas digunakan untuk menampilkan data array yang telah diinputkan oleh pengguna. dengan indeks x akan berulang sampai mencapai indkes 1, lalu untuk y dan z akan berulang sampai indeks 2. setiap perulangan yang dieksekusi akan ditambah satu. cout digunakan untuk menampilkan output data array yang telah diinputkan oleh user sesuai posisi x, y, dan z yang sudah ditentukan. fungsi ends digunakan untuk menambahkan karakter spasi di akhir setiap output elemen dalam baris yang sama.

#### Output:
```C++
Input Array[0][0][0] = 6
Input Array[0][0][1] = 7
Input Array[0][0][2] = 2
Input Array[0][1][0] = 3
Input Array[0][1][1] = 1
Input Array[0][1][2] = 5
Input Array[0][2][0] = 2
Input Array[0][2][1] = 8
Input Array[0][2][2] = 4

Input Array[1][0][0] = 9
Input Array[1][0][1] = 4
Input Array[1][0][2] = 5
Input Array[1][1][0] = 2
Input Array[1][1][1] = 7
Input Array[1][1][2] = 5
Input Array[1][2][0] = 3
Input Array[1][2][1] = 5
Input Array[1][2][2] = 6

Data Array[0][0][0 = 6
Data Array[0][0][1 = 7
Data Array[0][0][2 = 2
Data Array[0][1][0 = 3
Data Array[0][1][1 = 1
Data Array[0][1][2 = 5
Data Array[0][2][0 = 2
Data Array[0][2][1 = 8
Data Array[0][2][2 = 4
Data Array[1][0][0 = 9
Data Array[1][0][1 = 4
Data Array[1][0][2 = 5
Data Array[1][1][0 = 2
Data Array[1][1][1 = 7
Data Array[1][1][2 = 5
Data Array[1][2][0 = 3
Data Array[1][2][1 = 5
Data Array[1][2][2 = 6

672
315
284

275
356
```
Pengguna memasukan input, setiap input dimasukkan maka indeks pada z akan bertambah sampai indeks ke 2 lalu ke indeks pada y sampai indeks ke 2 setelah itu ke indek pada x sampai indeks ke 2. setiap perulangan dieksekusi maka indeks ditambah satu.

#### Full code Screenshot:

![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-2-Array/blob/master/Modul%202%20Alstrukdat/Code%20Guided%201%20Array.png?raw=true)

#### Output Screenshot:

![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-2-Array/blob/master/Output%20Modul%202%20Alstrukdat/Output%20Guided%201%20Array.png?raw=true)

### 2. Program Mencari Nilai Maksimal pada Array
```C++
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for ( i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
        
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}
```
**Code 1**
```C++
#include <iostream>
using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. using namespace std digunakan untuk menggunakan namespace std.

**Code 2**
```C++
int main()
{
}
```
digunakan sebagai fungsi utama dari program C++. program berjalan dalam fungsi ini. jadi di dalam fungsi int main() semua program akan berjalan dalam fungsi int main().

**Code 3**
```C++
int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
```

## Unguided 

### 1. [Soal]

```C++

```
#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)


## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
