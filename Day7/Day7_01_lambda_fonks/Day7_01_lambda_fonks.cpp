#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    auto lambda = [](int x, int y) -> int { // -> int dyoruz ya bu olmasa da program bunu anlar.
        return x + y;
    };  
    int result = lambda(5, 10);
    cout << "Result: " << result << endl;
    return 0;
}