/*
-Öğretmen temel sınıfı
-öğretmen sınıfında isim,yasi ve ogrencisayisi değiskenleri
-türetilmis sınıf(müdür) ise ogretmen sınıfından türetilsin
-her iki sınıfta da print fonksiyonu
-müdür sınıfında okul ismi yazdırılsın ve bu öğretmen sınıfında da gösterilsin

*/

#include <iostream>
#include <string>
#include "Day011_01_okul_programi_hash.h"
using namespace std;

int main(){
ogretmen o1;
mudur m1;
o1.isim_ver("Tuna");
o1.yas_ver(21);
o1.ogrencisayisi_ver(321);
m1.isim_ver("Kemal");
m1.yas_ver(54);
m1.okuladi_ver("Ataturk");

}