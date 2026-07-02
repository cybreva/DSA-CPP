#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> dq = {100,12,435,3,57,23} ;

    dq.push_front(100000);
    dq.push_back(1212);
    cout << dq.size() << " is the size before removing \n" << flush ;
    dq.pop_front();
    dq.pop_front();
    cout << dq.size() << " is the size after removing\n" << flush;
    dq.push_front(100000);
    dq.push_back(1212);
    cout << endl;
    for_each(
        dq.begin(),
        dq.end(),
        [](int n){
            cout << n << " " << flush ;
        }
    );

    cout << endl;

    cout << dq[1] << flush;
    cout << " \n" << flush ;
    cout << dq.at(1) << flush;
    cout  << " \n" << flush ;

    dq.insert(dq.begin() + 2, 99);
    dq.erase(dq.begin() + 3);
    dq.clear();
    dq.resize(50);
    for_each(
        dq.begin(),
        dq.end(),
        [](int n){
            cout << n << " " << flush ;
        }
    );

    dq.emplace_back(50);
    dq.emplace_front(5);

}