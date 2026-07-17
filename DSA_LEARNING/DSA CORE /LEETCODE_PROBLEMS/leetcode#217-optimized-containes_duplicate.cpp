#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[] = {12,1563,253,6578,12};
    size_t n = sizeof(arr)/sizeof(arr[0]) ;  
    unordered_set<int> seen ;

    
    
    for (int i = 0; i < n; i++)
    {
        auto it = seen.find(arr[i]);
        
        if(it == seen.end())
        {
              seen.insert(arr[i]);
        }
        else
        {
            cout << "true";
            return 0 ;
        }       
    }  
    
    cout << "false\n" ;
    return 0 ;
     
    
}