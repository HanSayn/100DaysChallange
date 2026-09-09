#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void show(int a[],int aSize){
    for(int i = 0;i < aSize;i++)
    cout << a[i] << " ";
}
int main(){

    int a[] = {43, 2, 34, 6, 74, 844, 9, 1};
    int arraySize = sizeof(a) / sizeof(a[0]);

    cout << "Arrays: ";
    show(a, arraySize);

    cout << "\n"<< endl;
    cout <<"Array sorting: ";
    sort(a, a+arraySize);

    show(a, arraySize);
    cout << "\n";
    if(binary_search(a, a+arraySize, 1)){ // istediğimiz eleman var mı yok mu bulur.
        cout <<"element founded" << endl;
    }
    else 
        cout << "element not founded";


}