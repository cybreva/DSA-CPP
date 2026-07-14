#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    float arr[] = { 0, -1, 999, -500, 42,-7,  0,  13, -99, 88, 0, 65, -31,   2, -18,77,  0, -64,  19, -5,36, -72,   0, 91, -11, 4, -28,  57,   0, -90,18, -45,  83,   0, -12,60, -39,  27,  -3,   0 };
    size_t n = sizeof(arr)/sizeof(arr[0]) ;
    
    for(size_t i = 0 ; i < n ; i++)
    {
        if(arr[i] > 0){
            arr[i] = (arr[i]*10)/100;
        }
        else if (arr[i] < 0){
            arr[i] = arr[i] - (arr[i]*10)/100;
        }
    }
    
    cout << "\nmodified array will be :  { " ;

    for(size_t  i = 0 ; i < n ; i++) 
    {
        cout << arr[i] << " , " << flush ;
    }
    
    cout << " } \n" ;


}