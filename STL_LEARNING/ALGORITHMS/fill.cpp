#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;


int main(){vector<int> x = {1,2,3,4,5};
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    fill
    (
        x.begin()+1,
        x.end()-1,
        100
    );


    for_each
    (
        x.begin(),
        x.end(),
        [](int n){
        cout << "" << n << " " << flush;
        }
    );
    
    cout << "\n" << flush ; 
    
    cout << "\n" << flush ;
    




}