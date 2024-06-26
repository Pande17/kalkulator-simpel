#include <iostream>
using namespace std;

int main() {
    int a, b, hasil;
    char pilih, lagi;

    do {
        system("cls");
        cout << endl;
        cout << "\t\t\tKalkulator \n \n";
        cout << " Masukkan Nilai Pertama : ";
        cin >> a;

        cout << "\n";
        cout << "  |====================|" << endl;
        cout << "  |     ARITMATIKA     |" << endl;
        cout << "  |--------------------|" << endl;
        cout << "  |      PILIHAN :     |" << endl;
        cout << "  |                    |" << endl;
        cout << "  | 1. Pertambahan (+) |" << endl;
        cout << "  | 2. Pengurangan (-) |" << endl;
        cout << "  | 3. Perkalian (x)   |" << endl;
        cout << "  | 4. Pemabagian (:)  |" << endl;
        cout << "  | 5. Modulus (%)     |" << endl;
        cout << "  |====================|" << endl;
        cout << endl;
        cout << " Masukkan Pilihan Menu dengan Simbol : ";
        cin >> pilih;

        cout << endl;
        cout << " Masukkan Nilai Kedua : ";
        cin >> b;

        switch (pilih) {
            case '+':
                hasil = a + b;
                break;
            case '-':
                hasil = a - b;
                break;
            case 'x':
                hasil = a * b;
                break;
            case ':':
                hasil = a / b;
                break;
            case '%':
                hasil = a % b;
                break;
            default:
                cout << "\n Operator Yang Anda Masukkan Tidak Valid \n";
                continue;
        }

        cout << endl;
        cout << " Hasil Dari Perhitungan : ";
        cout << a << " " << pilih << " " << b << " = " << hasil;

        cout << "\n \n Apakah anda ingin mengulang lagi (Y/N) : ";
        cin >> lagi;

        lagi = tolower(lagi);

        if (lagi != 'y') {
            cout << "\n \n Terima Kasih Sudah Berkunjung \n";
            break; 
        }

    } while (lagi == 'y');

    return 0;
}

