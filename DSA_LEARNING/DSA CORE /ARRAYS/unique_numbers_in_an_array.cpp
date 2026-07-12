#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[] = {1,1,2,2,2,3,4,4,5,5,6,7,7,8,8,8,9,10,10,11,11,12,13,13,14,15,15,15,16,17};
    size_t n = sizeof(arr)/sizeof(arr[0]) ;
    
    
    int uniqueCount = 0 ;
    cout << "\n the unique numbers in an array are : " ;
    cout << arr[0] << " ";
    uniqueCount = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            cout << arr[i] << " ";
            uniqueCount++;
        }
    }
    cout <<"\n number of unique numbers are : " << uniqueCount << endl ;
    cout << "\n" ;
    
    
}