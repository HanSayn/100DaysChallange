/*
-Öğretmen temel sınıfı
-öğretmen sınıfında isim,yasi ve ogrencisayisi değiskenleri
-türetilmis sınıf(müdür) ise ogretmen sınıfından türetilsin
-her iki sınıfta da print fonksiyonu
-müdür sınıfında okul ismi yazdırılsın ve bu öğretmen sınıfında da gösterilsin

*/

#ifndef DAY011_01_OKUL_PROGRAMİ_HASH_H
#define DAY011_01_OKUL_PROGRAMİ_HASH_H

class ogretmen{  
protected:
    char *isim;
    int yas;
    int ogrenciSayisi;
public:
    void isim_ver(char *i1){
        isim = i1;
        cout << i1;
    }
    void yas_ver(int y1){
        yas = y1;
        cout << y1;
    }
    void ogrencisayisi_ver(int os){
        ogrenciSayisi = os;
        cout << os;
    }
};

class mudur:public ogretmen{
protected:
    int ogretmenSayisi;
    char *okulAdi;
public:
    void ogretmensayisi_ver(int os1){
        ogretmenSayisi = os1;
        cout << os1;
    }
    void okuladi_ver(char *oa){
        okulAdi = oa;
        cout << oa;
    }
};


#endif


