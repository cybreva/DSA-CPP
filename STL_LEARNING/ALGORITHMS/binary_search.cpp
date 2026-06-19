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
int main (){


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> x = {1213, 1231,43212,3454,5434,564,1234,7,686,3456,87,3,46,5,4,2} ;

    sort_vector(x);
    search(x);
}