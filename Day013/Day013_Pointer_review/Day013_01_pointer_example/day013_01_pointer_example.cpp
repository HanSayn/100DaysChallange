/*
Question: Read as many words the user enters from the keyboard and record these words in a twodimensional string. Suppose the maximum word count is 15 and the maximum word length is 15. With a
function you will write, calculate the length of the longest word, the length of the shortest word and the
average word length and print the calculated values on the screen. To perform these operations, write
another function that calculates the word length. All functions you use in the code must be of void type.

Soru: Kullanıcının klavyeden girdiği kelimeleri okuyun ve bu kelimeleri iki boyutlu bir karakter dizisinde 
(string dizisinde) saklayın. Maksimum kelime sayısının 15 ve maksimum kelime uzunluğunun 15 olduğunu varsayın.
Yazacağınız bir fonksiyon ile en uzun kelimenin uzunluğunu, en kısa kelimenin uzunluğunu ve ortalama kelime
uzunluğunu hesaplayıp ekrana yazdırın. Bu işlemleri gerçekleştirmek için, kelime uzunluğunu hesaplayan ayrı
bir fonksiyon daha yazın. Kodda kullanacağınız tüm fonksiyonlar `void` tipinde olmalıdır.

Function prototypes should look like this:
void StrUzunluk(char *,int *);
void Hesapla(char[][15],int, int*,int*,int*);
Example screen output:
Kelime sayisini girin= / Enter the number of words=5
apple
orange
grapefruit
watermellon
cherry
En uzun kelimenin uzunlugu= / Length of the longest word=11
En kisa kelimenin uzunlugu= / Length of the shortest word=5
Ortalama kelime uzunlugu= / Average lentgh of the words=7

*/
#include <iostream>

using namespace std;

void StrUzunluk(char*, int*);
void Hesapla(char[][15], int, int*, int*, int*);

int main() {
    int num;
    char kelime[15][15];
    int enuzun;
    int enkisa;
    int ortalama;

    cout << "Kaç kelime gireceksiniz?: ";
    cin >> num;

    if (num < 1 || num > 15) {
        cout << "Kelime sayisi 1 ile 15 arasinda olmalidir.\n";
        return 1;
    }

    cout << "Kelimeleri giriniz: ";
    for (int i = 0; i < num; i++) {
        cin >> kelime[i];
    }

    Hesapla(kelime, num, &enuzun, &enkisa, &ortalama);

    cout << "En uzun kelimenin uzunlugu: " << enuzun << '\n';
    cout << "En kisa kelimenin uzunlugu: " << enkisa << '\n';
    cout << "Ortalama kelime uzunlugu: " << ortalama << '\n';
}

void StrUzunluk(char* kelime, int* uzunluk) {
    *uzunluk = 0;
    while (kelime[*uzunluk] != '\0') {
        (*uzunluk)++;
    }
}

void Hesapla(char kelime[][15], int num, int* enuzun, int* enkisa, int* ortalama) {
    int toplam = 0;
    int uzunluk;

    StrUzunluk(kelime[0], &uzunluk);
    *enuzun = uzunluk;
    *enkisa = uzunluk;
    toplam = uzunluk;

    for (int i = 1; i < num; i++) {
        StrUzunluk(kelime[i], &uzunluk);
        if (uzunluk > *enuzun) {
            *enuzun = uzunluk;
        }
        if (uzunluk < *enkisa) {
            *enkisa = uzunluk;
        }
        toplam += uzunluk;
    }

    *ortalama = toplam / num;
}