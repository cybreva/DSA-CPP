#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sort_vector(vector<int> &nums){
    sort(nums.begin(), nums.end());
}


void display(const vector <int> &y){
    for (int i = 0 ; i < y.size(); i++){
        cout << y[i] << "\n" ;

    }
    cout << y.size();
}

int main(){

    vector<int> x ;
    x.push_back(10);
    x.push_back(10212);
    x.push_back(11212);
    x.push_back(121);
    x.push_back(101122);

    sort_vector(x);
    display(x);

}