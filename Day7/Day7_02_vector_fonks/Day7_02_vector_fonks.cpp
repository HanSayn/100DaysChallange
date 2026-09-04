#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    vector <int> numbers(10);
    //vector <int> numbers2(10,5); // İlki eleman sayısı, ikincisi değerdir.
    numbers = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; //Her ne kadar boyutu 10 belirlesekte dinamik olarak büyüyebilir.
    cout <<" at: " <<numbers.at(3) << " "; //Bize istediğimiz indexteki değeri verir. Eğer o index yoksa out_of_range hatası verir.
    cout << " front: " <<numbers.front() << " "; //Bize ilk elemanı verir.
    cout << " back: " <<numbers.back() << " "; //Bize son elemanı verir.
    cout << " size: " <<numbers.size() << " "; //Bize vektörün boyutunu verir.
    cout << " capacity: " <<numbers.capacity() << " "; //Bize vektörün kapasitesini verir. Vektörün boyutu arttıkça kapasitesi de artar. Ama kapasite boyuttan büyük olabilir.
    cout << "\n";
    for(int x:numbers)
    cout << x << " ";
}