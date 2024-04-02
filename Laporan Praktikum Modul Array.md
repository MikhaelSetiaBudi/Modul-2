# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Mikhael Setia Budi</p>

## Dasar Teori

Array merupakan struktur data yang paling dasar. Sebuah array dapat dibayangkan sebagai sekumpulan kotak yang menyimpan sekumpulan elemen bertipe sama secara berurutan (sequential) di dalam memori komputer. Array juga dapat digambarkan sebagai elemen-elemen yang disusun secara vertikal sehingga dinamai tabel. Setiap elemen array data diacu melalui indeksnya [1]. Berikut ini
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
```
code diatas digunakan untuk menginput panjang array dengan variabel maks digubakan untuk menyimpan nilai maksimum dengan tipe data integer. variabel a digunakan untuk menyimpan panjang array. i = 1 adalah variabel i yang digunakan untuk loop dengan nilai awalnya 1. lokasi merupakan variabel yang digunakan untuk menyimpan lokasi indeks dari nilai maksimum dalam array. cout dan cin digunakan untuk menanyakan panjang array yang akan diinputkan oleh pengguna lalu menyimpannya dalam variabel a.

**Code 4**
```C++
int array[a];
```
code diatas digunakan untuk mendeklarasikan array dengan panjang a yang diinputkan sebelumnya. untuk tipe data adalah tipe data integer.

**Code 5**
```C++
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
```
code diatas digunakan untuk mengisi nilai ke dalam array dengan perulangan sebanyak panjang array (a) yang telah ditentukan. pengguna akan diberikan pesan untuk memasukkan sejumlah nilai tertentu (sebanyak a yang telah diinputkan) dimasukkan kedalam array. perulangan for akan berjalan sebanyak panjang array yang diinpukan oleh pengguna (a). setiap i dieksekusi maka array akan ditambah satu. dengan menggunakan loop for maka program akan berulang meminta pengguna untuk menginputkan angka ke dalam array sampai array terisi penuh sesuai dengan panjang array yang telah diinputkan.

**Code 6**
```C++
maks = array[0];
    for ( i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
        
    }
```
code diatas menggunakan loop untuk membandingkan setiap elemen array dengan nilai maksimum yang yang ditentukan sebelumnya. variabel maks diisi dengan nilai dari elemen pertama dalam array(array[0]). ini digunakan nilai awal untuk perbandingan nilai maksimum. loop for akan berjalan melalui setiap elemen dalam array. if digunakan untuk membuat kondisi yang memeriksa apakah nilai pada indeks ke i lebih besar dari nilai maksimum (maks). maks = array[i] digunakan jika nilai pada indeks ke i lebih besar dari nilai maksumumnya, jika lebih besar maka nilai maksimum (maks) akan diganti dengan nilai baru. variabel lokasi akan berubah dengan indeks i dimana nilai maksimum telah ditemukan, agar dapat melacak lokasi indeks nilai maksimum.

**Code 7**
```C++
 cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
```
digunakan untuk menampilkan nilai maksimum dengan mencantumkan variabel maks dan lokasi array nilai maksimum dengan mencantumkan variabel lokasi.

#### Output
```C++
Masukkan panjang array: 5
Masukkan 5 angka
Array ke-0: 4
Array ke-1: 5
Array ke-2: 8
Array ke-3: 2
Array ke-4: 7
Nilai maksimum adalah 8 berada di Array ke 2
```
Ketika program dijalankan maka kita akan dminta untuk memasukkan panjang array, lalu kita akan diminta untuk memasukan angka dimulai dari indeks ke 0 (array dimulai dari indeks ke 0) hingga 4. setelah itu maka nilai maksimal akan ditemukan dengan lokasi array nilai tersebut.

#### Full code Screenshot:

![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-2-Array/blob/master/Modul%202%20Alstrukdat/Code%20Guided%202%20Array.png?raw=true)

#### Output Screenshot:

![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-2-Array/blob/master/Output%20Modul%202%20Alstrukdat/Output%20Guided%202%20Array.png?raw=true)



## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

**Data Array : 1 2 3 4 5 6 7 8 9 10**

**Nomor Genap : 2, 4, 6, 8, 10,**

**Nomor Ganjil : 1, 3, 5, 7, 9,**


```C++
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    // Input data array
    cout << "Masukkan data array: ";
    string input;
    getline(cin, input);

    // Membaca data array dari string input
    stringstream arr(input);
    int num;
    vector<int> data_array;
    while (arr >> num) {
        data_array.push_back(num);
    }

    // Inisialisasi vektor untuk nomor genap dan ganjil
    vector<int> genap;
    vector<int> ganjil;

    // Perulangan melalui setiap elemen dalam array
    for (int num : data_array) {
        // Mengecek apakah nomor genap atau ganjil
        if (num % 2 == 0) {
            genap.push_back(num);
        } else {
            ganjil.push_back(num);
        }
    }

    // Tampilkan hasil
    cout << "Data Array: ";
    for (int num : data_array) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Nomor Genap: ";
    for (int num : genap) {
        cout << num << ", ";
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    for (int num : ganjil) {
        cout << num << ", ";
    }
    cout << endl;

    return 0;
}


// Mikhael Setia Budi
// 2311110033
//copyright@MikhaelS.B
```

**Code 1**
```C++
#include <iostream>
#include <vector>
#include <sstream>
```
code diatas digunakan untuk mendefinisikan header yang diperluan untuk fungsi input-output standar, vector, dan stringstream.

**Code 2**
```C++
using namespace std;
```
using namespace std digunakan untuk menggunakan namespace std.

**Code 3**
```C++
int main() {
    // Input data array
    cout << "Masukkan data array: ";
    string input;
    getline(cin, input);
```
code diatas digunakan untuk mencetak pesan untuk meminta pengguna memasukkan data array. membaca baris input yang dimasukkan oleh pengguna menggunakan getline() lalu menyimpannya dalam variabel input dengan tipe data string.

**Code 4**
```C++
stringstream arr(input);
    int num;
    vector<int> data_array;
    while (arr >> num) {
        data_array.push_back(num);
    }
```
code stringstream arr(input) digunakan untuk menggubah string input menjadi stringstream sehingga dapat melakukan operasi streaming. lalu code diatas juga mendeklarasikan variabel num untuk menyimpan tipe angka yang dikonversi, untuk tipe data adalah integer. membuat vektor data_array untuk menyimpan angka-angka yang diinputkan oleh pengguna, memungkinkan program untuk memproses data array yang dimasukkan secara dinamis. melakukkan looping dengan menggunakan while untuk memasukan setiap angka ke dalam vektor data_array. loop while akan berjalan selama proses pemmbacaan stringstream arr berhasil, nilai dari stringstream akan dibaca ke dalam variabel num. setelah itu nilai tersebut akan ditambahkan ke dalam vektor data_array, sehingga bektor data_array akan terus bertambah seiring berhasilnya pembacaan nilai dari stringstream

**code 5**
```C++
vector<int> genap;
vector<int> ganjil;

for (int num : data_array) {
        // Mengecek apakah nomor genap atau ganjil
        if (num % 2 == 0) {
            genap.push_back(num);
        } else {
            ganjil.push_back(num);
        }
    }
```
membuat dua vektor genap dan ganjil untuk menyimpan angka-angka genap dan ganjil yang diinputkan oleh pengguna. program melakukan perulangan melalui setiap elemen pada vektor data_array. jika angka tersebut genap maka dimasukkan ke dalam vektor genap, lalu jika ganjil maka dimasukkan ke dalam vektor ganjil dengan mengecek apakah angka pada data array ganjil atau genap.

**Code 6**
```C++
cout << "Data Array: ";
    for (int num : data_array) {
        cout << num << " ";
    }
    cout << endl;
```
program mencetak pesan Data Array, lalu menggunakan looping for untuk mengakses elemen num dalam vektor data_array. setiap elemen num dicetak ke layar diikuti dengan spasi. setelah selesai melakukan perulangan semua elemen, program mencetak baris baru dengan code endl

**Code 7**
```C++
    cout << "Nomor Genap: ";
    for (int num : genap) {
        cout << num << ", ";
    }
    cout << endl;
```
program mencetak pesan Nomor Genap, lalu menggunakan loop for untuk mengakses semua elemen num dalam vektor genap. semua elemen num dicetak ke layar, diikuti dengan koma dan spasi. seteleh melakukan perulangan pada semua elemen, program mencetak baris baru dengan menggunakan code endl.

**Code 8**
```C++
    cout << "Nomor Ganjil: ";
    for (int num : ganjil) {
        cout << num << ", ";
    }
    cout << endl;
```
program mencetak pesan Nomor Ganjil, lalu menggunakan loop for untuk mengakses semua elemen num dalam vektor ganjil. semua elemen num dicetak ke layar, diikuti dengan koma dan spasi. seteleh melakukan perulangan pada semua elemen, program mencetak baris baru dengan menggunakan code endl.

**code 9**
```C++
return 0;
```
code tersebut menunjukan bahwa program telah berhasil dijalankan tanpa masalah

#### Output:
```C++
Masukkan data array: 1 2 3 4 5 6 7 8 9 10
Data Array: 1 2 3 4 5 6 7 8 9 10
Nomor Genap: 2, 4, 6, 8, 10,
Nomor Ganjil: 1, 3, 5, 7, 9,
```
ketika program dijalankan maka akan diminta untuk memasukkan data array, lalu program akan memisahkan antara nomor ganjil dan nomor genap.

#### Full code Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-2-Array/blob/master/Modul%202%20Alstrukdat/Code%20Unguided%201%20Array.png?raw=true)

#### Output Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-2-Array/blob/master/Output%20Modul%202%20Alstrukdat/Output%20Unguided%201%20Array.png?raw=true)

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    int ukuran_x, ukuran_y, ukuran_z;

    cout << "Masukkan ukuran array dalam dimensi x: ";
    cin >> ukuran_x;

    cout << "Masukkan ukuran array dalam dimensi y: ";
    cin >> ukuran_y;

    cout << "Masukkan ukuran array dalam dimensi z: ";
    cin >> ukuran_z;

    // Deklarasi array
    int arr[ukuran_x][ukuran_y][ukuran_z];

    // Input elemen
    for (int x = 0; x < ukuran_x; x++) 
    {
        for (int y = 0; y < ukuran_y; y++) 
        {
            for (int z = 0; z < ukuran_z; z++) 
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
         cout << endl;
    }
    // Output Array
    for (int x = 0; x < ukuran_x; x++) 
    {
        for (int y = 0; y < ukuran_y; y++) 
        {
            for (int z = 0; z < ukuran_z; z++) 
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < ukuran_x; x++) 
    {
        for (int y = 0; y < ukuran_y; y++) 
        {
            for (int z = 0; z < ukuran_z; z++) 
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}


// Mikhael Setia Budi
// 2311110033
//copyright@MikhaelS.B
```

**Code 1**
```C++
#include <iostream>
using namespace std;
```
code diatas digunakan agar dapat melakukan input-output standar. using namespace std; digunakan agar dapat menggunakan fungsi dari namespace std.

**Code 2**
```C++
int main() {
}
```
code diatas merupakan fungsi utama dari program. semua program akan dieksekusi dalam int main()

**Code 3**
```C++
int ukuran_x, ukuran_y, ukuran_z;
```
code diatas digunakan untuk menyimpan ukuran array tiga dimensi yaitu ukuran_x, ukuran_y, dan ukuran_z

**Code 4**
```C++
cout << "Masukkan ukuran array dalam dimensi x: ";
    cin >> ukuran_x;

    cout << "Masukkan ukuran array dalam dimensi y: ";
    cin >> ukuran_y;

    cout << "Masukkan ukuran array dalam dimensi z: ";
    cin >> ukuran_z;
```
memunculkan pesan ke pengguna untuk memasukkan ukuran array tiga dimensi: x,y,z. ukurang tiga dimensi ini akan digunakan untuk mendeklarasikan array.

**Code 5**
```C++
int arr[ukuran_x][ukuran_y][ukuran_z];
```
code diatas digunakan untuk mendeklarasikan array tiga dimensi dengan ukuran yang ditentukan oleh pengguna.

**Code 6**
```C++
for (int x = 0; x < ukuran_x; x++) 
    {
        for (int y = 0; y < ukuran_y; y++) 
        {
            for (int z = 0; z < ukuran_z; z++) 
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
         cout << endl;
    }
```
code diatas digunakan untuk meminta pengguna memasukkan nilai untuk setiap elemen array dalam tiga dimensi. variabel x, y, dan z digunakan untuk mengontrol perulangan pada dimensi x, y, dan z. looping ini akan berjalan dari 0 sampai ukuran_x, ukuran_y, dan ukuran_z dikurangi 1 dikarenakan dalam bentuk indeks.cout dalam program diatas digunakan untuk program mencetak pesan untuk meminta pengguna memasukkan nilai untuk elemen array yang sedan dieksekusi, lalu akan disimpan dalam arr pada indeks sesuai dengan variabel x, y, dan z. setelah selesai mengisi seluruh elemen maka program akan menampilkan baris baru untuk membuat tampilan lebih tersetruktur.

**Code 7**
```C++
for (int x = 0; x < ukuran_x; x++) 
    {
        for (int y = 0; y < ukuran_y; y++) 
        {
            for (int z = 0; z < ukuran_z; z++) 
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
```
code diatas digunakan untuk mencetak kembali nilai-nilai yang telah dimasukkan ke dalam array tiga dimensi. variabel x, y, dan z digunakan untuk mengontrol perulangan pada dimensi x, y, dan z. looping ini akan berjalan dari 0 sampai ukuran_x, ukuran_y, dan ukuran_z dikurangi 1 dikarenakan dalam bentuk indeks. cout digunakan untuk mencetak pesan yang menunjukkan indeks array x, y, dan z dan nilai dari elemen array tersebut. setelah selesai mengisi seluruh elemen maka program akan menampilkan baris baru untuk membuat tampilan lebih tersetruktur.

**Code 8**
```C++
 for (int x = 0; x < ukuran_x; x++) 
    {
        for (int y = 0; y < ukuran_y; y++) 
        {
            for (int z = 0; z < ukuran_z; z++) 
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
```
code diatas digunakan untuk mencetak kembali nilai-nilai array tetapi tanpa pesan yang terkait dengan lokasi elemen dalam array. variabel x, y, dan z digunakan untuk mengontrol perulangan pada dimensi x, y, dan z. looping ini akan berjalan dari 0 sampai ukuran_x, ukuran_y, dan ukuran_z dikurangi 1 dikarenakan dalam bentuk indeks. cout digunakan untuk mencetak nilai dari elemen array pada indeks array x, y, dan z dan nilai dari elemen array tersebut. ends digunakan untuk menambahkan spasi di angtara nilai elemen. setelah selesai mengisi seluruh elemen maka program akan menampilkan baris baru untuk membuat tampilan lebih tersetruktur.

**Code 9**
```C++
return 0;
```
code tersebut menunjukan bahwa program telah berhasil dijalankan tanpa masalah

#### Output:
```C++
Masukkan ukuran array dalam dimensi x: 2
Masukkan ukuran array dalam dimensi y: 2
Masukkan ukuran array dalam dimensi z: 2
Input Array[0][0][0] = 1
Input Array[0][0][1] = 4
Input Array[0][1][0] = 2
Input Array[0][1][1] = 5

Input Array[1][0][0] = 3
Input Array[1][0][1] = 2
Input Array[1][1][0] = 3
Input Array[1][1][1] = 5

Data Array[0][0][0] = 1
Data Array[0][0][1] = 4
Data Array[0][1][0] = 2
Data Array[0][1][1] = 5
Data Array[1][0][0] = 3
Data Array[1][0][1] = 2
Data Array[1][1][0] = 3
Data Array[1][1][1] = 5

14
25

32
35
```
program akan meminta untuk menginputkan ukuran array pada dimensi x, y, dan z. setelah itu pengguna akan menginputkan nilai pada setiap array. setelah array z terpenuhi maka akan beralih ke array y,dan seterusnya. setelah semua diinputkan maka akan memunculkan data array yang telah diinputkan, laluakan memunculkan angka array tanpa pesan data array.

#### Full code Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-2-Array/blob/master/Modul%202%20Alstrukdat/Code%20Unguided%202%20Array.png?raw=true)

#### Output Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-2-Array/blob/master/Output%20Modul%202%20Alstrukdat/Output%20Unguided%202%20Array.png?raw=true)

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

```C++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int array;
    cout << "Masukkan panjang array: ";
    cin >> array;

    vector<int> data_array(array);

    // Input nilai-nilai array
    cout << "Masukkan nilai-nilai array:" << endl;
    for (int arr = 0; arr < array; arr++) {
        cout << "Array ke-" << arr << ": ";
        cin >> data_array[arr];
    }

    // Menampilkan menu untuk mencari nilai pada array
    cout << "Menu:" << endl;
    cout << "1. Mencari nilai maksimum array" << endl;
    cout << "2. Mencari nilai minimum array" << endl;
    cout << "3. Mencari nilai rata-rata array" << endl;

    // Meminta pengguna untuk memilih opsi menu
    int choice;
    cout << "Pilih opsi: ";
    cin >> choice;

    // Melakukan operasi sesuai pilihan yang diinputkan pengguna
    switch (choice) {
        case 1:
            // Mencari nilai maksimum
            if (!data_array.empty()) {
                int maksimum = *max_element(data_array.begin(), data_array.end());
                cout << "Nilai maksimum: " << maksimum << endl;
            } else {
                cout << "Array kosong." << endl;
            }
            break;
        case 2:
            // Mencari nilai minimum
            if (!data_array.empty()) {
                int minimum = *min_element(data_array.begin(), data_array.end());
                cout << "Nilai minimum: " << minimum << endl;
            } else {
                cout << "Array kosong." << endl;
            }
            break;
        case 3:
            // Mencari nilai rata-rata
            if (!data_array.empty()) {
                int total = 0;
                for (int num : data_array) {
                    total += num;
                }
                double rata_rata = static_cast<double>(total) / data_array.size();
                cout << "Nilai rata-rata: " << rata_rata << endl;
            } else {
                cout << "Array kosong." << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}


// Mikhael Setia Budi
// 2311110033
//copyright@MikhaelS.B
```

**Code 1**
```C++
#include <iostream>
#include <vector>
#include <algorithm>
```
code diatas digunakan untuk melakukan inpu-output standar dengan <iostream>. vectordigunakan untuk menyimpan urutan nilai dalam array. algorithm digunakan untuk melakukan operasi algoritma seperti pencarian nilai maksimum dan minimum.

**Code 2**
```C++
using namespace std;
```
code diatas digunakan untuk menggunakan fungsi dari namespace std.

**Code 3**
```C++
int main() {
}
```
code diatas merupakan fungsi utama dari program. semua program akan dieksekusi dalam int main()

**Code 4**
```C++
int array;
    cout << "Masukkan panjang array: ";
    cin >> array;

vector<int> data_array(array);
```
variabel array digunakan untuk menyimpan panjang array yang dimasukkan oleh pengguna. cout digunakan untuk menampilkan pesan kepada pengguna untuk menginputkan panjang array lalu disimpan dalam variabel array. vector digunakan untuk menyimpan nilai-nilai array yang dimasukkan oleh pengguna, ukuran vektor ditentukan oleh nilai array.

**Code 5**
```C++
cout << "Masukkan nilai-nilai array:" << endl;
    for (int arr = 0; arr < array; arr++) {
        cout << "Array ke-" << arr << ": ";
        cin >> data_array[arr];
    }
```
pengguna diminta untuk memasukkan nilai array satu per satu. setiap nilai yang dimasukkan akan disimpan dalam vector data_array. loop for digunakan untuk perulangan melalui setiap elemen array. variabel arr digunakan sebagai counter untuk indeks array. setiap kali perulangan dilakukan, program mencetak pesan Array ke- diikuti dengan nomor indeks arr. lalu nilai tersebut akan disimpan dalam vektor data_array pada indeks yang sesuai.

**Code 6**
```C++
 cout << "Menu:" << endl;
    cout << "1. Mencari nilai maksimum array" << endl;
    cout << "2. Mencari nilai minimum array" << endl;
    cout << "3. Mencari nilai rata-rata array" << endl;
```
code diatas digunakan untuk menampilkan menu pilihan untuk pengguna.

**Code 7**
```C++
int choice;
    cout << "Pilih opsi: ";
    cin >> choice;
```
pengguna diminta untuk memilih salah satu opsi dari menu yang ditampilkan dengan tipe data integer. variabel choice dideklarasikan untuk menyimpan pilihan yang dimasukkan pengguna. program mencetak pesan Pilih opsi untuk memberitahu kepada pengguna untuk memasukkan pilihan yang akan dicari. lalu dimasukkan ke dalam variabel choise dengan menggunakan cin.

**Code 8**
```C++
switch (choice) {
        case 1:
            // Mencari nilai maksimum
            if (!data_array.empty()) {
                int maksimum = *max_element(data_array.begin(), data_array.end());
                cout << "Nilai maksimum: " << maksimum << endl;
            } else {
                cout << "Array kosong." << endl;
            }
            break;
        case 2:
            // Mencari nilai minimum
            if (!data_array.empty()) {
                int minimum = *min_element(data_array.begin(), data_array.end());
                cout << "Nilai minimum: " << minimum << endl;
            } else {
                cout << "Array kosong." << endl;
            }
            break;
        case 3:
            // Mencari nilai rata-rata
            if (!data_array.empty()) {
                int total = 0;
                for (int num : data_array) {
                    total += num;
                }
                double rata_rata = static_cast<double>(total) / data_array.size();
                cout << "Nilai rata-rata: " << rata_rata << endl;
            } else {
                cout << "Array kosong." << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }
```
code switch diatas digunakan untuk mengecek apakah vektor data_array tidak kosong. jika terdapat angka maka program akan mencari case mana yang sesuai dengan pilihan yang diinputkan pengguna, setelah menemukan case yang sesuai maka case tersebut akan dioperasikan dari pilihan 1, 2, dan 3. setelah itu hasil operasi akan ditampilkan ke pengguna. jika vektor data_array kosong maka akan muncul pesan array kosong. jika pengguna memilih nomor 1 maka program akan memeriksa apakah data)array tidak kosong menggunakan data_array.empty(). jika terdapat nilai pada array maka program akan menggunakan max_element dari library <algorithm> untuk menemukan nilai maksimum dalam array, begitupun dengan case 2 mencari nilai minimum. jika terdapat nilai pada arry maka program menghitung total dari semua elemen array menggunakan perulangan for. setelah mendapatkan nilai total maka program akan membaginya dengan jumlah elemen untuk mendapatkan rata-ratanya. jika nilai yang diinputkan tidak sesuai maka akan muncul Pilihan tidak valid.

**Code 8**
```C++
 return 0;
```
code tersebut menunjukan bahwa program telah berhasil dijalankan tanpa masalah

#### Output:
```C++
Masukkan panjang array: 3
Masukkan nilai-nilai array:
Array ke-0: 2
Array ke-1: 3
Array ke-2: 4
Menu:
1. Mencari nilai maksimum array
2. Mencari nilai minimum array
3. Mencari nilai rata-rata array
Pilih opsi: 1
Nilai maksimum: 4

Masukkan panjang array: 3
Masukkan nilai-nilai array:
Array ke-0: 2
Array ke-1: 3
Array ke-2: 4
Menu:
1. Mencari nilai maksimum array
2. Mencari nilai minimum array
3. Mencari nilai rata-rata array
Pilih opsi: 2
Nilai minimum: 2

Masukkan panjang array: 3
Masukkan nilai-nilai array:
Array ke-0: 2
Array ke-1: 3
Array ke-2: 4
Menu:
1. Mencari nilai maksimum array
2. Mencari nilai minimum array
3. Mencari nilai rata-rata array
Pilih opsi: 3
Nilai rata-rata: 3
```
output program diatas akan menampilkan beberapa case, dimana pengguna diminta untuk memasukkan panjang array. setelah itu masukan nilai array dari masing masing indeks. lalu pilih menu yang ingin digunakan. maka akan muncul hasilnya

#### Full code Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-2-Array/blob/master/Modul%202%20Alstrukdat/Code%20Unguided%203%20Array.png?raw=true)

#### Output Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-2-Array/blob/master/Output%20Modul%202%20Alstrukdat/Output%20Unguided%203%20Array.png?raw=true)

## Kesimpulana
array merupakan struktur data paling dasar, terdapat 5 jenis array yaitu array satu dimensi, array dua dimensi, array multidimensi, array empat dimensi, array lima dimensi. array sangat penting karena dalam array dapat menyimpan elemen data yang nantinya akan digunakan dalam struktur data. jika data array sudah disimpan maka ketika kita akan menggunakan data tersebut baik itu untuk mencari data terbesar maupun terkecil, mencari rata rata dari semua data dalam array, dan menampilkan data dalam array sesuai dengan indeksnya.

## Referensi
[1] J. Sihombing, “Penerapan Stack Dan Queue Pada Array Dan Linked List Dalam Java,” J. Ilm. Infokom, vol. 7, no. 2, pp. 15–24, 2019.
