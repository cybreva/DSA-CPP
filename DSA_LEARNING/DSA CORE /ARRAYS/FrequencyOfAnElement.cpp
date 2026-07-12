#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[] = {42, -15, 0, 73, 18,-8, 91, 24, 7, -33,56, 101, 2, -44, 19,88, 13, 0, -71, 64};
    size_t n = sizeof(arr)/sizeof(arr[0]) ;
    int count = 0 ;
    int target ;
    cout << "enter he target >>> " << flush ;
    cin >> target ;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == target )
        {
            count++ ;
        }
    }
    if(count!=0 )
    {
        cout << "Frequency of " << target << " is : " << count << '\n'  ;
    }
    else
    {
        cout << target << " not found in the array.\n";
    }
}