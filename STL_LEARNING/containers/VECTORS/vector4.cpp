#include <iostream>
#include<vector>

using namespace std;

void add_number(vector <int> &x){
    int temp ; 
    for (int i = 0 ; i < 5 ; i++){    
    cout << "enter the number you want to add " << endl;
    cin >> temp ;
    x.push_back(temp);
    }
    
}
void display(const vector <int> &y){
    for (int i = 0 ; i < y.size(); i++){
        cout << y[i] << "\n" ;

    }
    cout << y.size();
}
int main (){
    vector<int> nums ;
    
    add_number(nums);

    display(nums);
}
