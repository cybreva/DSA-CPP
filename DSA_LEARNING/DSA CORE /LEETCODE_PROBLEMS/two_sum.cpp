#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5] = {1,2,3,4,5} ;
    int target ;
    cout << "please enter target : " << flush ;
    cin >> target ;
    size_t n = sizeof(arr)/sizeof(arr[0]);

    
    for (int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[i] + arr[j] == target ){
                cout << "the sum of " << arr[i] << " and " << arr[j] << " will be equals to " << target << flush ;
            }
        }
    }

    cout << "\n" << flush ;
}