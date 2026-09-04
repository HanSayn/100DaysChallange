#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    char cr;
    ofstream createFile("tampon_bellek1.txt");
    for(cr = 'A'; cr <= 'Z'; cr++){
        createFile.put(cr);
        createFile.flush(); // tampon bellek temizleniyor ve dosyaya yazılıyor.
    }
    ifstream readFile("tampon_bellek1.txt");
    cout << "First reading: ";
    while(readFile.get(cr)){
        cout << cr;
    }
    createFile.close();
    readFile.clear();
    readFile.seekg(0); // dosya imleci başa konumlandırılıyor.
    
    cout << "\n\nSecond reading: ";
    while(readFile.get(cr)){
        cout << cr;
    }
    readFile.close();
    return 0;
}
    





