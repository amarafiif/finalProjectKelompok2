/*
*
     ======================================
     +    PROGRAM KASIR JASTIP XIBANTER   +
     ======================================
     +      FINAL PROJECT UAS ALPROG      +
     ======================================
     + Muhammad Ammar Afif     21.11.3927 +
     + Muhammad Agung Satria   21.11.3958 +
     + Christian Ravando       21.11.3941 +
     + Alexandrian Deva        21.11.3914 +
     + Muhammad Yafi Rosyid    21.11.3892 +
     ======================================

     */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main()
{
    // INISIALIASI VARIABEL
    double jumlah_barang, bayar, diskon, jumlah[100], harga[100], total[50];
    double jumlah_semua{};
    string nama_barang[100];

    cout << "=========================================================\n";
    cout << "                    JASTIP XIBANTER                      \n";
    cout << "=========================================================\n\n";

    cout << "Jumlah Item :                                           ";
    cin >> jumlah_barang; // JUMLAH BARANG YANG DI TITIP

    cout << "\n\n";
    for (int i = 0; i < jumlah_barang; i++) {
        cout << "Masukan Barang ke- " << i + 1 << "\n";
        cout << "Nama Barang     : ";
        cin >> nama_barang[i]; // INPUTAN NAMA BARANG YANG DI TITIP

        cout << "Berat Barang    : ";
        cin >> jumlah[i]; //INPUTAN BERAT BARANG YANG DI TITIP  FORMAT /KG


        cout << "Harga /Kg       : ";
        cin >> harga[i]; // INPUTAN HARGA PERKILOGRAMNYA
        cout << "\n\n";


        total[i] = jumlah[i] * harga[i]; //COUNT HARGA TOTAL
        jumlah_semua = jumlah_semua += total[i]; // COUNT SELURUH BARANG

    }
    cout << "\n\n";
    cout << "=========================================================\n";
    cout << "                         TRANSAKSI                       \n";
    cout << "=========================================================\n";

    cout << "No" << setw(13) << "Nama Barang" << setw(15) << "Jumlah" << setw(12) << "Harga" << setw(12) << "Total" "\n";
    for (int i = 0; i < jumlah_barang; i++) {
        cout << i + 1 << setw(13) << nama_barang[i] << setw(15) << jumlah[i] << setw(12) << harga[i] << setw(12) << total[i] << endl;
    }


    // PERCABANGAN DISKON
    if (jumlah_semua >= 100000) {
        diskon = 0.06 * jumlah_semua;
    }
    else if (jumlah_semua >= 50000) {
        diskon = 0.04 * jumlah_semua;
    }
    else if (jumlah_semua >= 25000) {
        diskon = 0.02 * jumlah_semua;
    }
    else {
        diskon = 0;
    }

    cout << "\n\nJumlah Bayar :                                   Rp." << jumlah_semua << endl;
    cout << "Diskon       :                                   Rp." << diskon << endl;
    cout << "Total Bayar  :                                   Rp." << jumlah_semua - diskon << endl;
    cout << "Bayar        :                                   Rp.";
    cin >> bayar;
    cout << "Kembalian    :                                   Rp." << (bayar - (jumlah_semua - diskon)) << endl;

    cout << "\n\n";
    cout << "=========================================================\n";
    cout << "                        THANK YOU                        \n";
    cout << "=========================================================\n";


    return 0;

    system("pause");
}