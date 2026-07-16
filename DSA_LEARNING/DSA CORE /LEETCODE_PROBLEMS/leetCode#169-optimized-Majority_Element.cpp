#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[] = {6,5,5};
    size_t n = sizeof(arr)/sizeof(arr[0]) ;
    int candidate  = arr[0] ;
    int count = 0;
    for(int i = 0 ; i < n ; i++)
    {   
        if(count == 0)
        {
            candidate = arr[i] ;
             
        }
        if(arr[i]== candidate)
        {
            count++;

        }
        else
        {
            count--;
        }
    }
    cout << "\n" << candidate << "\n";
}