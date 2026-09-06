#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    vector<int> list(10);
    list.assign(5, 8);
    for(int i = 0; i < list.size();i++){
        cout << list[i] << " "; // 8 8 8 8 8
    }
    cout << endl;
    list.push_back(10); //sona eleman ekler.
    list.push_back(42);
    cout << "push_back(): ";
    for(int i = 0; i < list.size();i++){
        cout << list[i] << " "; // 8 8 8 8 8 10 42
    }
    cout << endl;
    cout << "pop_back(): ";
    list.pop_back(); //son elemanı siler.
    for(int i = 0; i < list.size();i++){
        cout << list[i] << " "; // 8 8 8 8 8 10
    }
    cout << endl;
    int n = list.size();
    cout << "the last element: " << list[n-1] << endl; // 10
    cout << endl;
    list.insert(list.begin(), 33); // 0. indexe 33 ekler.
    cout << "insert(): ";
    for(int i = 0; i < list.size();i++){
        cout << list[i] << " "; // 33 8 8 8 8 8 10
    }
    cout << endl;
    list.erase(list.end()-1); // son elemanı siler.
    cout << "erase(): ";
    for(int i = 0; i < list.size();i++){
        cout << list[i] << " "; // 33 8 8 8 8 
    }
    cout << endl;
    list.emplace(list.begin(), 99); // 0. indexe 99 ekler.
    cout << "emplace(): ";
    for(int i = 0; i < list.size();i++){
        cout << list[i] << " "; // 99 33 8 8 8 8 
    }
    cout << endl;
    list.emplace_back(100); // sona 100 ekler.
    cout << "emplace_back(): ";
    for(int i = 0; i < list.size();i++){
        cout << list[i] << " "; // 99 33 8 8 8 8 100
    }
    cout << endl;

    list.clear(); // tüm elemanları siler.
    cout << "clear(): ";
    for(int i = 0; i < list.size();i++){
        cout << list[i] << " "; //  
    }
    cout << endl;
}
