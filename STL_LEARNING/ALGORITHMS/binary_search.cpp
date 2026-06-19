#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void sort_vector(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
}
void search(vector <int> &nums)
{
    int target ;
    cout << "enter the number you you want to search : " <<  flush;
    cin >> target ;

    bool result = binary_search(
        nums.begin() ,
        nums.end() ,
        target 
    );

    if (result != true ) {
        cout << "number not found \n" << flush ;
    }
    else{
        cout << " the number is found " << "\n" << flush ;
    }

    
}
void Lower_bound(vector <int> &nums , int &num){

    

    auto it = lower_bound
    (
        nums.begin(),
        nums.end(),
        num
    );
    int index = it-nums.begin() ;

    //cout << "Suggested index can be  : " << index << "\n" << flush ;

    cout << " index suggested by lower_bound : " << index << "\n" << flush ; 
    

    auto it2 = upper_bound
    (
        nums.begin(),
        nums.end(),
        num
    );
    int index2 = it2-nums.begin() ;

    cout << " index suggested by upper_bound : " << index2 << "\n" << flush ; 
}
int main (){


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> x = {10,20,20,20,30,40} ;

    sort_vector(x);
    search(x);


    int target ;
    cout << "Please enter the number you want to add : " << flush; 
    cin >> target ;


    Lower_bound(x,target);
}