#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5] = {} ;
    size_t n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0 ;
    //taking input in array from user
    for(int i = 0 ; i  < n ; i++){
        cout << "enter " << i+1 << " number : " << flush ;
        cin >> arr[i] ;
        
    }
    //displaying the array
    for(int j = 0 ; j< n ; j++ ){
        cout << arr[j] << " " << flush;
        sum+=arr[j];
    }
    
    cout << "\n" << flush ;
    cout << "the sum of all elements oif a array is : " << sum << "\n" << flush ;
}