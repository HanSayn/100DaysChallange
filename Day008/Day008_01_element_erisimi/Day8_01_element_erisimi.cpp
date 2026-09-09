#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    vector<int> numbers;
    numbers = {1,2,3,4,5,6,7,8,9,10};

    cout << "numbers(0): " <<numbers[0] << endl; // 1
    cout << "numbers.at(0): " <<numbers.at(3) << endl; // 4 istediğimiz indexi söyler.
    cout << "numbers.front(): " <<numbers.front() << endl; // 1
    cout << "numbers.back(): " <<numbers.back() << endl; // 10

    int* ptr = numbers.data();
    cout << "numbers.data(): " <<(*ptr+2) << endl; // 3

}