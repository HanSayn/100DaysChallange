/*
-Öğretmen temel sınıfı
-öğretmen sınıfında isim,yasi ve ogrencisayisi değiskenleri
-türetilmis sınıf(müdür) ise ogretmen sınıfından türetilsin
-her iki sınıfta da print fonksiyonu
-müdür sınıfında okul ismi yazdırılsın ve bu öğretmen sınıfında da gösterilsin

*/

#ifndef DAY011_01_OKUL_PROGRAMİ_HASH_H
#define DAY011_01_OKUL_PROGRAMİ_HASH_H

#include <iostream>
#include <string>
using namespace std;
class ogretmen{  
protected:
    string isim;
    int yas;
    int ogrenciSayisi;
public:
    void isim_ver(const string& i1){
        isim = i1;
    }
    void yas_ver(int y1){
        yas = y1;
    }
    void ogrencisayisi_ver(int os){
        ogrenciSayisi = os;
    }
    void yazdir() const {
        cout << "Ogretmen: " << isim
            << " | Yas: " << yas
                << " | Ogrenci sayisi: " << ogrenciSayisi << '\n';
}
};

class mudur:public ogretmen{
protected:
    int ogretmenSayisi;
    std::string okulAdi;
public:
    void ogretmensayisi_ver(int os1){
        ogretmenSayisi = os1;
    }
    void okuladi_ver(const string& oa){
        okulAdi = oa;
    }
    void yazdir() const {
        ogretmen::yazdir();
        cout << "Okul: " << okulAdi
            << " | Ogretmen sayisi: " << ogretmenSayisi << '\n';
    }
};


#endif


