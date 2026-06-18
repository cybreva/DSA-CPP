#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    vector<int> x  = {54 , 70 , 90 , 120 , 10 , 10000 , 110, 1212 ,12121323, 121} ;
   

    int target ;
    cout << "enter the number you want to find : " << flush ; 
    cin >> target;
    auto it = find(
        x.begin(),
        x.end(),
        target
    );

    

    if(it == x.end())
    {
        cout << "Not Found \n " << flush  ;
    }
    else
    {
        cout << "Found at index :  "<< it-x.begin() << "\n" << flush ;
        
    }

}