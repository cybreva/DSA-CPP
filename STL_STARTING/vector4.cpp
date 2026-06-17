#include <iostream>
#include<vector>

using namespace std;

void add_number(vector <int> &x){
    int temp ;
    cout << "enter the number you want to add " << endl;
    cin >> temp ;
    x.push_back(temp);
}
void display(const vector <int> &y){
    for (int i = 0 ; i < y.size(); i++){
        cout << y[i] << "\n" ;

    }
}
int main (){
    vector<int> nums = {10,20,30};

    add_number(nums);

    display(nums);}
