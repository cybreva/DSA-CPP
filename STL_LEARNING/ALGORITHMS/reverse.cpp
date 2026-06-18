#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    vector<int> x  = { 10,20,30,40,50,60,70,80,90,100,110,120,130,140,150} ;

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
    
    reverse
    (
        x.begin(),
        x.end()
    );


   /* for(int i = 0 ; i < x.size() ; i ++){
        
        cout << x[i] << "\n" << flush ;
    } */

    

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
        cout << "Found at index :  "<< it2-x.begin() << "\n" << flush ;
        
    }

}