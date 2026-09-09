#include <iostream>
#include <list>
#include <string>

using namespace std;

void printList(const list<int>& lst){
    for (auto i = lst.begin(); i != lst.end();i++) {
        cout << *i << " ";
    }
    cout << endl;
}

int main(){
    list<int> lst;
    lst.push_back(2);
    lst.push_back(4);
    lst.push_back(54);
    lst.push_back(23);
    lst.push_back(35);

    cout<<"first:";
    printList(lst);
    lst.push_back(10); // sona eleman ekler.
    cout << "push_back(): ";
     printList(lst);
    lst.push_front(1); // başa eleman ekler.
    cout << "push_front(): ";
    printList(lst);
    lst.pop_back(); // son elemanı siler.
    cout << "pop_back(): ";
    printList(lst);
    lst.pop_front(); // baştaki elemanı siler.
    cout << "pop_front(): ";
    printList(lst);
    lst.reverse(); // listeyi tersine çevirir.
    cout << "reverse(): ";
    printList(lst);
    lst.sort(); // listeyi küçükten büyüğe sıralar.
    cout << "sort(): ";
    printList(lst);
    lst.remove(23); // 23 değerine sahip elemanı siler.
    cout << "remove(23): ";
    printList(lst);
    //lst.merge(lst); // iki listeyi birleştirir.
    //lst.splice(lst.begin(), lst, lst.begin()); // bir listeyi başka bir listenin içine ekler.
    

    return 0;
}