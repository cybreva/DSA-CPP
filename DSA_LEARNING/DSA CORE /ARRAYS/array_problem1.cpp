#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5] = {1,2,3,4,5} ;
    int arrr[5] = {5,4,3,2,1} ;
    size_t n = sizeof(arr)/sizeof(arr[0]);

    int sum = 0 ;
    for (size_t i = 0 ; i < n ; i++){
        sum+=arr[i]+arrr[i] ;
    }
    cout << sum << "\n" ;


}