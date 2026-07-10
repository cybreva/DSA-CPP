#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[10] = {1,2,3,4,5,45,354,34,534,34} ; 
    size_t n = sizeof(arr)/sizeof(arr[0]);
    int maximum = arr[0];
    int minimum = maximum ;
    int secondLargest = arr[0] ;
    for(int i = 0 ; i < n ; i++){
        
        if (arr[i] > maximum)
        {
            secondLargest = maximum;
            maximum = arr[i];
        }
        else if (arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
        
    }

     cout << "the maximum number is : " << maximum << "\n" <<  flush ;
    cout << "the second largest number is : " << secondLargest << "\n" << flush ;
    

}








