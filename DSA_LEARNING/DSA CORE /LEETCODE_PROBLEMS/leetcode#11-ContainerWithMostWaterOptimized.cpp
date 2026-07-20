#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[] = {1,8,6,2,5,4,8,3,7};
    size_t n = sizeof(arr)/sizeof(arr[0]) ;
    int area ;
    int maximumArea = 0;
    int left = 0;
    int right = n-1;
    while(left<right)
    {
        area = (right- left) * min(arr[right], arr[left]);
        maximumArea = max(maximumArea, area);
        if(arr[right] > arr[left])    
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << "the area of container containing most water = " << maximumArea ;
    cout << "\n" ;
    return 0 ;

}