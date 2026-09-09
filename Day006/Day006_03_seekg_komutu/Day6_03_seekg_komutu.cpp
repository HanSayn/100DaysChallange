#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){

    fstream createfile("Day6_03_seekg.txt", ios::in | ios::out | ios::trunc); // dosya açma işlemi yapılıyor. ios::trunc ile dosya içeriği siliniyor.
    createfile << "Tunahan Teker\n";
    createfile << 21 << endl;
    createfile<< 65.85 << endl;

    createfile.clear();
    createfile.seekg(3, ios::beg); // dosya imleci dosyanın başına konumlandırılıyor.

    char cArray[40];
    int age;
    float weight;

    createfile.getline(cArray, 40);
    createfile >> age;
    createfile>> weight;
    cout << cArray << endl;
    cout << age << endl;
    cout << weight << endl;
    return 0;
}