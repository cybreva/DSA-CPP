#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    list<int> ls ;


    auto it = ls.begin();
    it = ls.insert(it,99);
    

    cout << "after insertion list = {" << flush ;
    for_each(ls.begin(),ls.end(),[](int n){cout << n << " " << flush ;});
    cout << "}\n" <<flush ;
    
    it = ls.erase(it);
    cout << "after erasing list = {" << flush ;
    for_each(ls.begin(),ls.end(),[](int n){cout << n << " " << flush ;});
    cout << "}\n" <<flush ;

    ls.push_front(3);
    cout << "after pushing '3' to front of list = {" << flush ;
    for_each(ls.begin(),ls.end(),[](int n){cout << n << " " << flush ;});
    cout << "}\n" <<flush ;
    ls.push_back(22);
    cout << "after pushing '22' to back of list = {" << flush ;
    for_each(ls.begin(),ls.end(),[](int n){cout << n << " " << flush ;});
    cout << "}\n" <<flush ;
    ls.pop_back();
    cout << "after poping back from list = {" << flush ;
    for_each(ls.begin(),ls.end(),[](int n){cout << n << " " << flush ;});
    cout << "}\n" <<flush ;
    ls.pop_front();
    cout << "after poping from front of list = {" << flush ;
    for_each(ls.begin(),ls.end(),[](int n){cout << n << " " << flush ;});
    cout << "}\n" <<flush ;

    
    cout << "random access : " << flush ;
    advance(it, 2);
    

}