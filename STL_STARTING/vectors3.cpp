#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &x)
{
    for (int i = 0 ; i < x.size(); i++){
        cout << x[i] << "\n" ;

    }

}




int main (){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> nums ;
    nums.push_back(10);
    nums.push_back(100);
    nums.push_back(1000);
    nums.push_back(10000);
    nums.push_back(100000);

    display(nums);
    cout << "byy" << flush;

}