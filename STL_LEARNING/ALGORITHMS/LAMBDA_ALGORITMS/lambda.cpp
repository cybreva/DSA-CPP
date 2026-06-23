#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

void allof(vector<int> &num){

    bool a = all_of(
        num.begin() ,
        num.end() ,
        [](int n){
            return n % 2 == 0 ;
        }
    ) ;
    cout << "the ans of all of are : " << a << "\n" << flush ;
}
void noneof(vector<int> &num){

    bool b = none_of(
        num.begin() ,
        num.end() ,
        [](int n){
            return n % 2 == 0 ;
        }
    ) ;
    cout << "the ans of none of are  : " << b << "\n" << flush ;
}
void anyof(vector<int> &num){

    bool c = any_of(
        num.begin() ,
        num.end() ,
        [](int n){
            return n % 2 == 0 ;
        }
    ) ;
    cout << "the ans of anyof are : " << c << "\n" << flush ;
}
vector<int> x = {10,20,30};



int main(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> x = {12,1,12,1,2,12,1,21,2,1,3,24,0,5,6,547,8,78,9} ;
    vector <int> y = {10,20,30} ;
    vector <int> z = {1,3,5,7,9,99,77,55,35,33,131,11} ;
    allof(x);
    allof(y);
    allof(z);
    noneof(x);
    noneof(y);
    noneof(z);
    anyof(x);
    anyof(y);
    anyof(z);

    for_each(
    y.begin(),
    y.end(),
    [](int n){
        cout << "\n" << n << " " << flush;
    }
    
    );
    cout << "\n" << flush ; 


    vector<int> I = {5,10,15};

    for_each(
        I.begin(),
        I.end(),
            [](int t){
                t += 100;
            }
        );

        for(int t : I)
        {
            cout << t << " ";
        }
}