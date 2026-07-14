//question 
/*int arr[] = {5, 1, 5, 2, 5, 3, 5, 4, 5};

Task:
Count the number of occurrences of 5 using only one loop.

Output:
Number of occurrences of 5 = 5

Also state the Time Complexity.*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[] = {5, 1, 5, 2, 5, 3, 5, 4, 5};
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