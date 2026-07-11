#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[] = {1,2,3,4,5};
    size_t n = sizeof(arr)/sizeof(arr[0]); 
    
    int temp = arr[0] ;

    for (int i = 0 ; i < n-1 ; i++){
        arr[i] = arr[i+1];
       
    }

     arr[n-1] = temp ;
    
    for(size_t  i = 0 ; i < n ; i++) {
        cout << arr[i] << " " << flush ;
    }
    
    cout << "\n" ;


}