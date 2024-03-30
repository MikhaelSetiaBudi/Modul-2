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
