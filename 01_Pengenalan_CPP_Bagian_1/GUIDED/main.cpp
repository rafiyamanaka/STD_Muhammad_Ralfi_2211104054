#include <iostream>

using namespace std;

int main()
{
    // Tipe data pada C++
    // tipe data <<nama variabel>> = nilai ;
    /*
    int angka = 10;
    float desimal = 10.5;
    string kalimat = "ini tipe data string";
    double tingi = 10.5;
    bool isSunny = true;
    char jenis_kelamin = 'L';

    // print variables values
    cout << "Angka = " << angka << endl;


    // input
    int number;
    cout << "input your number = ";
    cin >> number;
    cout << "Your number is = " << number << endl;
    */

    // operator aritmatika
    int angka1 = 10;
    int angka2 = 2;
    int hasil = angka1 % angka2;
    cout << "Hasilnya adalah : " << hasil << endl;

    // operator perbandingan
    int number1 = 5;
    int number2 = 5;
    bool value = (number1 == number2);
    cout << "Value is : " << boolalpha << value << endl;

    // Operator Logika
    bool kondisi1 = true;
    bool kondisi2 = true;
    bool hasil = (kondisi1 || kondisi2);
    cout << "Hasilnya adalah : " << boolalpha << hasil << endl;

    bool kondisi = false;
    bool value = !kondisi; // dinegasikan
    cout << "Hasilnya adalah : " << boolalpha << value << endl;

    // Percabangan
    string kata;
    cout << "Masukkan kata = Halo" << endl;
    cin >> kata;

    if (kata == "Halo") {
        cout << "Kata sesuai" << endl;
    } else {
    cout << "Kata tidak sesuai!" << endl;
        }
    }


    int tv;
    cout << "Daftar Channel Tv: " << endl;
    cout << "1. RCTI" << endl;
    cout << "2. SCTV" << endl;

    cout << "Masukkan Chanel Pilihan : ";
    cin >> tv;

    switch (tv) {
    case 1 :
        cout << "Channel yg anda pilih adalah RCTI" << endl;
        break;
    case 2 :
        cout << "Channel yg anda pilih adalah SCTV" << endl;
        break;
    default :
        cout << "Channel yg anda pilih tidak tersedia" << endl;
    }

    // Pengulangan
    for (int i=5; i<5; i++){
        cout << i+1 << ". Hello World!" << endl;
    }

    for (int i=6; i>0; i--){
        cout << i-1 << ". Hello world!" << endl;
    }
}


