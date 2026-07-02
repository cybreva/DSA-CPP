#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    list<int> ls = {1,21,32,23,432,23,32,432,43,2,34,42,32,4323,24234,};

    cout << "actuall list = {" << flush ;
    for_each(ls.begin(),ls.end(),[](int n){cout << n << " " << flush ;});
    cout << "}\n" <<flush ;
    
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
    advance(it, 2);
    cout << *it << "\n" << flush;

    ls.sort();
    cout << "after sorting list : {" << flush ;
    for_each(ls.begin(),ls.end(),[](int n){cout << n << " " << flush ;});
    cout << "}\n" << flush ;

    ls.reverse();
    cout << "after reversing list : {" << flush ;
    for_each(ls.begin(),ls.end(),[](int n){cout << n << " " << flush ;});
    cout << "}\n" << flush ;

    ls.unique();
    cout << "after running ls.unique(); list : {" << flush ;
    for_each(ls.begin(),ls.end(),[](int n){cout << n << " " << flush ;});
    cout << "}\n" << flush ;

    list<int> ls2 = {12,123,321,54,4567,2354,7657823,346,654};
    cout << "before merging list ls : {" << flush ;
    for_each(ls.begin(),ls.end(),[](int n){cout << n << " " << flush ;});
    cout << "}\n" << flush ;
    ls.merge(ls2);
    cout << "after merging list ls and list ls2  : {" << flush ;
    for_each(ls.begin(),ls.end(),[](int n){cout << n << " " << flush ;});
    cout << "}\n" << flush ;
    ls.splice(ls.begin() , ls2);
    cout << "after running ls.splice(ls2); list will be  : {" << flush ;
    for_each(ls.begin(),ls.end(),[](int n){cout << n << " " << flush ;});
    cout << "}\n" << flush ;
}