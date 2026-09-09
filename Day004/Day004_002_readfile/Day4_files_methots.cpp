#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream dosya;
    dosya.open("deneme.txt");  
    dosya << "Bu konuyu daha iyi anlayabilmek için yaptiğim bir denemedir.\n" << " 'ofstream' nesnesi ile dosya yazma işlemi yapiliyor." <<endl;
    dosya.close();
    
    ifstream dosya2("deneme.txt");
    string satir;
    while(getline(dosya2, satir)){ //dosya2 dosyasından satır satır okuma işlemi yapılıyor.
        cout << satir << endl;
    }
    dosya2.close(); 

    //fstream dosya3("deneme.txt", ios::in | ios::out);
    //dosya3 << "Bu onuyu daha iyi anlayabilmek için yaptiğim bir denemedir.\n" << "fstream nesnesi ile dosya yazma işlemi yapiliyor." <<endl;
    //dosya3.close();
    return 0;
}