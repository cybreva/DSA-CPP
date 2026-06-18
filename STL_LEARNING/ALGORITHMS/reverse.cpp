#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    vector<int> x = {10,20,30,10,40,10,50,23,20,23,40,45,454,324,543,76,132,342};

    int target1 ;
    cout << "enter the number you want to find : " << flush ; 
    cin >> target1;
    
    auto it = find(
        x.begin(),
        x.end(),
        target1
    );

    

    if(it == x.end())
    {
        cout << "Not Found \n " << flush  ;
    }
    else
    {
        cout << "Found at index :  "<< it-x.begin() << "\n" << flush ;
        
    }

    sort(x.begin(), x.end());

    auto it2 = find(
        x.begin(),
        x.end(),
        target1
    );

    if(it2 == x.end())
    {
        cout << "Not Found \n " << flush  ;
    }
    else
    {
        cout << "After sorting vector the number is found at index :  "<< it2-x.begin() << "\n" << flush ;
        
    } 
    
    reverse
    (
        x.begin(),
        x.end()
    );


   /* for(int i = 0 ; i < x.size() ; i ++){
        
        cout << x[i] << "\n" << flush ;
    } */

    

    auto it3 = find(
        x.begin(),
        x.end(),
        target1
    );

    if(it3 == x.end())
    {
        cout << "Not Found \n " << flush  ;
    }
    else
    {
        cout << "After reversing vector the number is found at index :  "<< it3-x.begin() << "\n" << flush ;
        
    } 

    
    
    int result = count
                (
                    x.begin(),
                    x.end(),
                    target1
                );

    cout << "number of occurences of : " << target1 << " is : " << result << "\n" << flush ; 
}