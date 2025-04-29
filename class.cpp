#include <iostream>
using namespace std;

class mahasiswa{
public:
int nim;
string nama;
float nilai;


void print_data(){
    cout << "NIM = " <<nim << endl;
    cout <<"NAMA = " <<nama <<endl;
    cout <<"NILAI = " <<nilai <<endl;
    
}
};


int main(){
    mahasiswa mhs;
    mhs.nim = 0256;
    mhs.nama = "fito";
    mhs.nilai = 96,69;

mhs.print_data();

}

