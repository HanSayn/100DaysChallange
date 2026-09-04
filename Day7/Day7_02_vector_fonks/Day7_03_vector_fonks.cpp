#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    vector<int> list(10,7);
    list = {1,2,3,4,5,6,7,8,9,10}; //Her ne kadar boyutu 10 belirlesekte dinamik olarak büyüyebilir.
    cout << "begin() - end(): "; 
    
    for(auto x = list.begin(); x != list.end();x++){
        cout << *x << " ";
    }
    cout << "\n\ncbegin() - cend(): ";
    for(auto i = list.cbegin(); i != list.cend();i++){
        cout << *i << " ";
    }
    cout << "\n\nrbegin() - rend(): ";
    for(auto i = list.rbegin(); i != list.rend();i++){
        cout << *i << " ";
    }
    cout << "\n\nrbegin() - rend(): ";
    for(auto i = list.crbegin(); i != list.crend();i++){
        cout << *i << " ";
    }
    return 0;
}