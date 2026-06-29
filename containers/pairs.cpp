#include<iostream>
#include <utility>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<int, int> p = {10, 20};
    p.first += 5;
    cout << p.first << " " << p.second;

}