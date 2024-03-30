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