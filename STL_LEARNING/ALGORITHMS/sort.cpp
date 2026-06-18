#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sort_vector(vector<int> &nums){
    sort(nums.begin(), nums.end()-1);
}


void display(const vector <int> &y){
    for (int i = 0 ; i < y.size(); i++){
        cout << y[i] << "\n" ;

    }
    cout << y.size() << endl;
}

int main(){

    vector<int> x ;
    x.push_back(54);
    x.push_back(70);
    x.push_back(90);
    x.push_back(120);
    x.push_back(10);

    sort_vector(x);
    display(x);
    auto it = x.begin();
    it++;
    cout << *it ;

}