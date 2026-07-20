#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[] = {1,8,6,2,5,4,8,3,7};
    size_t n = sizeof(arr)/sizeof(arr[0]) ;
    int area ;
    int maximumArea = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            area = ((j) - i) * min(arr[i], arr[j]);
            maximumArea = max(maximumArea, area);
        }
    }
    cout << "the area of container containing most water = " << maximumArea ;
    cout << "\n" ;
    return 0 ;

}