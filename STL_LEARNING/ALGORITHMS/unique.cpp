#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){

    vector<int> x = {10,10,20,20,20,30,30,40};

    auto it = unique
    (
        x.begin(),
        x.end()
    );

    x.erase
    (
        it,
        x.end()
    );

    for_each
    (
        x.begin(),
        x.end(),
        [](int n){
        cout << "" << n << " " << flush;
        }
    );
}