#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[] = {1,2,3,4,5};
    size_t n = sizeof(arr)/sizeof(arr[0]); 
    int k ;
    cout << "please enter k : " << flush ;
    cin >> k ;
    k = k % n;
    int temp ;

    for(int j = 0 ; j != k ; j++)
    {
        temp = arr[n-1] ;

        for (size_t i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i-1];
        }
        
        arr[0] = temp ;
    }
    
    
    for(size_t  i = 0 ; i < n ; i++) {
        cout << arr[i] << " " << flush ;
    }
    
    cout << "\n" ;


}