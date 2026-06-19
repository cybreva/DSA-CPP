#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;





void sort_vector(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
}

void Lower_bounds_and_upper_bounds(vector <int> &nums , int &num){

    cout << "without equal range --------------->>>>>>>>>>" << "\n" << flush ;

    auto it = lower_bound
    (
        nums.begin(),
        nums.end(),
        num
    );
    int index = it-nums.begin() ;

   
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

void equal_range(vector <int> &nums , int &num){

    cout << "with equal range --------------->>>>>>>>>>" << "\n" << flush ;

    auto range = equal_range
    (
        nums.begin(),
        nums.end(),
        num
    );
    auto lower_bound_iterator = range.first ;

    cout << "the lower bound iterator of choosen number in vector X is at  : " << *lower_bound_iterator << "\n" << flush ;
    
    auto upper_bound_iterator = range.second ;
    
    cout << "the upper bound iterator of choosen number in vector X is at : " << *upper_bound_iterator << "\n" << flush ;
    
    int frequency = range.second - range.first ;
    
    cout << "the frequency is : " << frequency << "\n" << flush;
    
    int lb_index = range.first - nums.begin();

    cout << "the index as per lower bound is : " << lb_index << "\n" << flush;

    int ub_index = range.second - nums.begin();

    cout << "the index as per upper bound is : " << ub_index << "\n" << flush;

    if (range.first != nums.end())
    {
        cout << *range.first << "\n";
    }
    else
    {
        cout << "lower bound points to x.end()\n";
    }

    if (range.second != nums.end())
    {
        cout << *range.second << "\n";
    }
    else
    {
        cout << "upper bound points to x.end()\n";
    }
}
int main (){


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> x = {10,20,20,20,30,40} ;

    sort_vector(x);
    


    int target ;
    cout << "Please enter the number you want to add : " << flush; 
    cin >> target ;


    Lower_bounds_and_upper_bounds(x,target);
    equal_range(x,target);
}