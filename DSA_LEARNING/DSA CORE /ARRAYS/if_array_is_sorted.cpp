#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Example of a sorted array
    int arr[] = {10, 20, 30, 40, 50};
    size_t n = sizeof(arr)/sizeof(arr[0]) ;
    bool isSorted = true ;
    for (int i = 0 ; i < n-1 ; i++){
        if(arr[i+1] < arr[i]){
            isSorted = false ;
            break ;
        }
        
    }
    if(!isSorted)
        {cout << "Not Sorted\n" << flush;}
    else
        {cout << "Sorted\n" << flush;}

    


}
