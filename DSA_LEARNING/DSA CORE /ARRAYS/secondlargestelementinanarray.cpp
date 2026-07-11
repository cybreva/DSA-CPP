#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[] = {100, 50, 90}; 
    size_t n = sizeof(arr)/sizeof(arr[0]);
    int Largest = arr[0];
    int secondLargest = INT_MIN ;
    for(size_t i = 1 ; i < n ; i++){
        if(Largest < arr[i]){
            secondLargest = Largest ;
            Largest = arr[i];
        }
        else if ( arr[i] > secondLargest && arr[i] < Largest){
            secondLargest = arr[i] ;
        }
    }
   
    cout << " the largest number is  : '"  << Largest << "'  \n"  << " and the second largest number is : '" << secondLargest << "' \n" << flush ;
}








