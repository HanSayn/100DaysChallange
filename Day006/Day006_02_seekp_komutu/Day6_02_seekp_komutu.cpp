#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    ofstream outfile("02_seekp_seekg.txt", ios::out);
    outfile << "Tunahan Teker \n";
    outfile << "C++ Programlama Dili \n";
    outfile << "Dosya İşlemleri \n";
    outfile.seekp(0, ios::beg); // Dosya imleci başa konumlandırılıyor.

    outfile <<" Dosyanin başina";
    outfile.close();
    cout << "Dosya yazma işlemi tamamlandi." << endl;
}