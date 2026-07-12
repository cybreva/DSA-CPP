#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[] = {
    0,0,0,0,0,
    1,
    0,0,
    2,
    0,
    3,
    0,0,0,
    4,
    0,
    5,
    0,0,0,0,
    6,
    0,
    7,
    0,
    8,
    0,0,
    9,
    0,0,0,
    10,
    0
    };
    size_t n = sizeof(arr)/sizeof(arr[0]); 
    int index = 0 ;

    for (int i = 0 ; i < n ; i++){
        if(arr[i] != 0 ) {
            arr[index] = arr[i];
            index ++ ;
        }
    }

    
    for ( ; index < n; index++)
    {
        arr[index] = 0;
    }

    for(size_t  i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " << flush ;
    }
    cout << "\n" ;




}