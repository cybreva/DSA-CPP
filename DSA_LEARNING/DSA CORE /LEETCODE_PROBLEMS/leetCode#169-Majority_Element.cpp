#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[] = {2 ,2 ,1 ,1 ,1 ,2 ,2};
    size_t n = sizeof(arr)/sizeof(arr[0]) ;
    int count ;
    for(int i = 0 ; i < n ; i++)
    {   count = 0 ;
        for(int j = 0 ; j < n ; j++)
        {
            if(arr[i] == arr[j])
            {
                count++ ;
            }
        }
        if(count > n/2)
        {
            return arr[i] ;
        }
    }
    //cout << "\n" <<  count << "\n" ;
    return 0 ;
}