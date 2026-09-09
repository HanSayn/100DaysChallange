#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class person{
    private:
        string name,lastname,myText;
        int age;
        ofstream file;
        ifstream file2;
    public:
        void writefile(string n, string l, int a){
            file.open("devam2.txt", ios::app | ios::out);
            file << n << setw(10) << l << setw(10) << a << endl;
            file.close();
        }
        void readfile(){
            file2.open("devam2.txt",ios::in);
            while(!file2.eof()){
                getline(file2, myText);
                cout << myText << endl;
            }
            file2.close();
        }
};

int main(){
    person p1;
    p1.writefile("Ali", "Yilmaz", 25);
    p1.writefile("Ayse", "Demir", 30);
    p1.writefile("Mehmet", "Kaya", 28);
    p1.readfile();
    return 0;
}