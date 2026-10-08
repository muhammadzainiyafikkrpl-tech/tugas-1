#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nama, sekolah;
    char pilih;

    ofstream file("data.csv", ios::app);

    do {
        cout << "Nama : ";
        getline(cin, nama);

        cout << "Sekolah : ";
        getline(cin, sekolah);

        file << nama << "," << sekolah << endl;

        cout << "Input lagi? (y/n) : ";
        cin >> pilih;
        cin.ignore();

    } while (pilih == 'y' || pilih == 'Y');

    file.close();

    return 0;
}
