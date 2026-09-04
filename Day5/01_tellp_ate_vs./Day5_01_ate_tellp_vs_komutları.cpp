#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string filename = "devam1.txt";
    ofstream createfile(filename); // dosya oluşturma işlemi yapılıyor.
    createfile << " Herhangi bir şey yaziyorum." << endl;
    createfile.close();
    fstream file(filename, ios::in | ios::out | ios::ate); //
    int MycurPos = file.tellp();

    file<<" Merhabalar bugün ate komutunu tellp \n";
    file<<" ve seekp komutlarini deneyeceğiz.";
    file.seekp(MycurPos); // seekp komutu ile dosya imlecini MycurPos konumuna getiriyoruz.
    file<<" Bu dosyanin sonuna eklenecek";
    file.close();
}
// Burda tellp ilk cümlenin sonunu gösteriyor ve seekp ile dosya imlecini MycurPos konumuna getiriyoruz. Bu sayede dosyanın ortasına ekleme yapabiliyoruz.