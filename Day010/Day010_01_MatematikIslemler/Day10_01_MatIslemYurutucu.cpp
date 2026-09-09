#include "Day10_01_MatIslem.h"
#include <iostream>
using namespace std;

MatIslem::MatIslem() {
    cout << "Please enter two integers: ";
    cin >> a >> b;
}

void MatIslem::ekokuyazdir(){
    int max= a * b;
    int sayac = 0;
    for(int i = 1; i <= max; i++){
        if(i % a == 0 && i % b == 0){
        cout <<"The least common multiple of two numbers: ";
        cout << i ;
        break;
    }
}

}
void MatIslem::ebobuyazdir(){
    int max = (a < b) ? a : b;
    int min = (a > b) ? b : a;
    for(int i = min; 1 <= i; i--){
        if(a % i == 0 && b % i== 0){
            cout <<"\n The greatest common divisor of two numbers: ";
            cout << i;
            break;
    }
}
}




