#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std; 

/*1. min_element()
2. max_element()
3. value print karo
4. index print karo
5. duplicate min/max test karo*/

void min_value(vector <int> &nums){
    auto it = min_element(
        nums.begin() ,
        nums.end() 
    ) ;

    cout << "\nthe minimum value in the vector is : " << *it << " and its index is : " << it-nums.begin() << "\n" << flush;
}

void max_value(vector <int> &nums){
    auto it = max_element(
        nums.begin() ,
        nums.end() 
    );
    
    cout << "\nthe maximum value in the vector is : " << *it << " and its index is : " << it-nums.begin() << "\n" << flush;
}

int main(){
    ios::sync_with_stdio(false) ;
    cin.tie(nullptr);

    vector <int> x = {10, 100, 123, 4321, 5432,123, 534,10 ,1 , 1343, 21,42,3,2,1} ;
    min_value(x);
    max_value(x);
    
}