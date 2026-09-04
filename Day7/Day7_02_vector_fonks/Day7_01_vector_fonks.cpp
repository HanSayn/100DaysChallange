#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    vector<int> list = {2,3,4,5,6,7};

    for_each(list.begin(), list.end(), [](int &x){
        x*=2;
    });
    cout << "List after for_each: ";
    for(int &x:list){
        cout << x << " ";
    }
     return 0;
}