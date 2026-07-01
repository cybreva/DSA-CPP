#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> dq;

    dq.push_front(100000);
    dq.push_back(1212);
    cout << dq.size() << flush ;
    dq.pop_front();
    dq.pop_front();
    cout << dq.size() << flush;
    dq.push_front(100000);
    dq.push_back(1212);
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

}