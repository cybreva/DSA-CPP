#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[] = {42, 17, -8, 42, 0, 91, -15, 17, 63, 5,-8, 29, 91, 73, 0, -44, 29, 18, 56, 73,99, -1, 5, 42, 88, -15, 64, 18, 99, 2,37, -44, 81, 56, 13, 5, 91, -8, 27, 64,0, 73, 42, 19, 81, -1, 88, 29, 17, 63};
    size_t n = sizeof(arr)/sizeof(arr[0]) ;
    int count = 0 ;
    int target ;
    cout << "enter he target >>> " << flush ;
    int firstIndex = -1 ;
    int lastIndex = -1;
    cin >> target ;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == target )
        {
            count++ ;
            lastIndex = i ;
            if(firstIndex == -1){
                firstIndex = i ;
               
            }
        }
    }
    if(count > 0)
    {   
        cout << "Frequency of " << target << " is : " << count << " and its first index is : " << firstIndex << " and its last index is : " << lastIndex << '\n'  ;
    }
    else
    {
        cout << target << " not found in the array.\n";
    }
}