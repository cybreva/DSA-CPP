#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void accumulate_result(vector <int> &nums , int &input) {
    int result = accumulate(
        nums.begin() ,
        nums.end() ,
        input 
    ) ;
    cout << "the result is : " << result << "\n" << flush ;
    
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> x = {10211,2112,3242,453,2134,455,43,234,2,553,5646,2344,344,35,54,20,30,40,50};

    int target ;
    cout << "what number you want to accumulate  : " << flush ;
    cin >> target ;

    accumulate_result(x , target) ;         
}