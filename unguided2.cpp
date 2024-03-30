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
