#include <iostream>
#include <string>
using namespace std;
// UNGUIDED 2

string angkaKeKata(int angka) {
    const string satu[] = {
        "nol", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan"
    };

    const string duaDigit[] = {
        "", "", "dua puluh", "tiga puluh", "empat puluh",
        "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"
    };

    if (angka < 10) {
        return satu[angka];
    } else if (angka < 20) {
        switch (angka) {
            case 10: return "sepuluh";
            case 11: return "sebelas";
            case 12: return "duabelas";
            case 13: return "tigabelas";
            case 14: return "empatalas";
            case 15: return "limabelas";
            case 16: return "enambelas";
            case 17: return "tujuhbelas";
            case 18: return "delapanbelas";
            case 19: return "sembilanbelas";
            default: return "";
        }
    } else {
        int puluhan = angka / 10;
        int satuan = angka % 10;

        if (satuan == 0) {
            return duaDigit[puluhan];
        } else {
            return duaDigit[puluhan] + " " + satu[satuan];
        }
    }
}


int main()
{
    // UNGUIDED 1
    /*
    float a, b, hasil;
    cout << "Masukan bilangan float 1: ";
    cin >> a;
    cout << "Masukkan bilangan float 2: ";
    cin >> b;

    hasil = a + b;
    cout << "Hasil penjumlahan: " << hasil << endl;
    hasil = a - b;
    cout << "Hasil pengurangan: " << hasil << endl;
    hasil = a * b;
    cout << "Hasil perkalian: " << hasil << endl;
    hasil = a / b;
    cout << "Hasil pembagian: " << hasil << endl;
    */

    // UNGUIDED 2 POTONGAN KODE ADA DI PALING ATAS

    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka harus antara 0 hingga 100!" << endl;
        return 1;
    }

    // Manggil fungsi untuk mengonversi angka ke kata
    string output = angkaKeKata(angka);
    cout << angka << " : " << output << endl;

    return 0;


    // UNGUIDED 3
    /*
    int n;
    cout << "Masukkan angka: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << " * ";
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
    */

}
