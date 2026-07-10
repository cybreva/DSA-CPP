#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5] = {1,2,3,4,5} ; 
    size_t n = sizeof(arr)/sizeof(arr[0]);
    
    int target ;
    cout << "enter targeted number : " << flush ;
    cin >> target ;
    bool found = false ;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            found = true;
            break;
        }
    }
    if(found)
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
    cout << "\n" ;

}