//Alttaki kodu terminale yapıştırınca kodun hepsi bir arada derleniyor.
// clang++ -std=c++17 Day10_01_MatIslem.cpp Day10_01_MatIslemYurutucu.cpp -o program && ./program
#include "Day10_01_MatIslem.h"
#include <iostream>

using namespace std;

int main(){
    
    MatIslem m1;

    m1.ekokuyazdir();
    m1.ebobuyazdir();
}