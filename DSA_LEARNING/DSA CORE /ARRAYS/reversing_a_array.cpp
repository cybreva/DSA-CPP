#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5] = {1,2,3,4,5} ; 
    size_t n = sizeof(arr)/sizeof(arr[0]);
    int left = 0 ;
    int right = n-1 ;

    while(left<right)
    {
        swap(arr[left] , arr[right]);

        left ++ ;
        right -- ;
    }

    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " " << flush ;
    }
    
    cout << "\n" ;
}