#include <iostream> // untuk input & output
using namespace std;

int main() {
    // Menampilkan teks ke layar
    cout << "Halo, selamat datang di dunia C++!" << endl;

    // Variabel
    int umur;
    string nama;

    // Input data dari user
    cout << "Masukkan nama kamu: ";
    cin >> nama;

    cout << "Masukkan umur kamu: ";
    cin >> umur;

    // Output hasil
    cout << "Halo " << nama << ", umur kamu " << umur << " tahun." << endl;

    // Contoh perhitungan
    int a, b;
    cout << "\nMasukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    cout << "Hasil penjumlahan: " << a + b << endl;
    cout << "Hasil pengurangan: " << a - b << endl;
    cout << "Hasil perkalian: " << a * b << endl;
    cout << "Hasil pembagian: " << (float)a / b << endl;

    return 0;
}
