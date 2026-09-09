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
public:
    char Getisim();
    int Getyas();
    int GetogrenciSayisi();
    
    void Setisim(char);
    void Setyas(int);
    void SetogrenciSayisi(int);
    
protected:
    char isim;
    int yas;
    int ogrenciSayisi;
    char okulAdi;
};

class mudur:public ogretmen{
public:
    void SetogretmenSayisi(int);
    int GetogretmenSayisi();
protected:
    int ogretmenSayisi;
};


#endif


