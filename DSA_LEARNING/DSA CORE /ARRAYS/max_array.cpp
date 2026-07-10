#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5] = {1,2,3,4,5} ; 
    size_t n = sizeof(arr)/sizeof(arr[0]);
    int maximum = arr[0];
    
    for(int i = 0 ; i < n ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "the maximum number is : " << maximum << "\n" <<  flush ;

}