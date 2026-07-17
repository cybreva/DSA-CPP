#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[] = {12,1563,253,6578,12};
    size_t n = sizeof(arr)/sizeof(arr[0]) ;  
    
    for (int i = 0; i < n; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "true";
                return 0;
            }
            
        }
    }  
    
    cout << "true";
    return 0;
    cout << "\n" ; 
    
}