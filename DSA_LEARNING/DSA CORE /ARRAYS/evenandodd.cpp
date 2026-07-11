#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[] = {42, -15, 0, 73, 18,-8, 91, 24, 7, -33,56, 101, 2, -44, 19,88, 13, 0, -71, 64};
    size_t n = sizeof(arr)/sizeof(arr[0]) ;

    int evenCount = 0 ;
    int oddCount = 0;

    for (int i = 0 ; i < n ; i++) {
        if(arr[i]%2 == 0){
            evenCount += 1 ;
        }
        else{
            oddCount += 1;
        }
    }

    cout << "the number of even elements is : " << evenCount << "\n" << flush ;
    cout << "the number of odd elements is : " << oddCount << "\n" << flush ;


}