#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    int x = 7;
    auto lambda = [](int x, int y) -> int { // -> int dyoruz ya bu olmasa da program bunu anlar.
        return x + y;
    };  
    int result = lambda(5, 10);
    cout << "Result: " << result << endl;

    auto multiply = [x] (int y)-> int{
        return x * y;
    };
    int multiplyResult = multiply(5);
    cout << "Multiply Result: " << multiplyResult << endl;

    auto increment = [&x](){
        x++;
    };
    increment();
    cout << "Incremented Value: " << x << endl;
    return 0;
}