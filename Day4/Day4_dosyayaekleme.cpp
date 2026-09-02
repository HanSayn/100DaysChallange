#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){

    ofstream myFile;
    myFile.open("dosyaekleme.txt", ios::app | ios::out); //dosyaya ekleme ve yazma işlemi yapılıyor.
    if(myFile.is_open()){
        string name,lastname;
        int age;
        cout << "Adinizi giriniz: ";
        cin >> name;
        cout << "Soyadinizi giriniz: ";
        cin >> lastname;
        cout << "Yasinizi giriniz: ";
        cin >> age;
        myFile << name << setw(20) << lastname << setw(20) << age << endl;
        myFile.close();
    }
    else{
        cerr << "Dosya acilamadi." << endl;
    }
}