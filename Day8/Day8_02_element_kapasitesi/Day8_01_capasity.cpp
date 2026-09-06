#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    vector<int> nums(100);
    nums = {1,2,3,4,5,6,7,8,9,10};
    cout <<"nums.size(): " << nums.size() << endl; // 10
    cout <<"nums.capacity(): " << nums.capacity() << endl; // 10
    cout << "nums.max_size(): " << nums.max_size() << endl; // 4611686018427387903
    
    nums.resize(15); // 10 dan 15 e büyütür. 5
    cout <<"nums.size(): " << nums.size() << endl; // 15
    cout <<"nums.empty(): " << nums.empty() << endl; // İçi dolu mu boş mu söyler.
    nums.resize(5); // 15 den 5 e küçültür. 10
    for(int i = 0; i < 10; i++){
        cout << nums[i] << " "; // 1 2 3 4 5 6 7 8 9 10
    } 
    cout << endl;
    nums.shrink_to_fit();
    for(int i = 0; i < 10; i++){
        cout  <<  nums[i] << " "; // 1 2 3 4 5 . . . . .
    }
}