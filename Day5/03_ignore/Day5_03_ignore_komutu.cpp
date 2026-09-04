#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    ofstream outfile("devam3.txt", ios::ate | ios::out); // dosya açma işlemi yapılıyor. ios::ate ile dosya imleci dosyanın sonuna konumlandırılıyor.
    outfile<<"Gene herhangi bir şey yaziyorum.\n";
    outfile<<"bakalim ne zaman\n";
    outfile<<"Belli bir karaktere kadar görmezden gelir\n";
    outfile<<"getline fonksiyonu kullanimi";
    outfile.close();
    ifstream infile("devam3.txt");
    char cArray[100];
        while(!infile.eof()){
            infile.ignore(16,'a');
            infile.getline(cArray, 100);
            cout << cArray << endl;
    }
    infile.close();
    return 0;
}