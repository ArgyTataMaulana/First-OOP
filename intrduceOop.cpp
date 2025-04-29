#include <iostream>
using namespace std;

class Mahasiswa{
    public:
    int NIM;
    string nama;
    float nilai;
    void printData(){
        cout << "Nim: "<< NIM << endl;
        cout << "Nama: "<< nama << endl;
        cout << "Nilai: "<< nilai << endl;
    }
};

int main(){
    Mahasiswa mhs;

    mhs.NIM = 2024;
    mhs.nama = "abra";
    mhs.nilai = 80.5;
    
    mhs.printData();
}