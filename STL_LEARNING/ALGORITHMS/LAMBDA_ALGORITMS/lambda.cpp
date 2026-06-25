#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

void allof(vector<int> &num){
//all_of
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
//none_of
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
//anyof
    bool c = any_of(
        num.begin() ,
        num.end() ,
        [](int n){
            return n % 2 == 0 ;
        }
    ) ;
    cout << "the ans of anyof are : " << c << "\n" << flush ;
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> x = {12,1,12,1,2,12,1,21,2,1,3,24,0,5,6,547,8,78,9} ;
    vector <int> y = {10,20,30,40,50,60,70,80,90,100} ;
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
//for_each
    for_each
    (
        y.begin(),
        y.end(),
        [](int n){
        cout << "" << n << " " << flush;
        }
    );
    cout << "\n" << flush ; 
    cout << "\n" << flush ;
    

    //find_if
    auto it = find_if(
        z.begin() ,
        z.end() ,
        [](int n ){
            return n%2==0;
        }
    );
    
    if(it != z.end())
    {
        cout << "the numeber youre looking is  " << *it << "\n" << flush;
    }
    else
    {
        cout << "Not Found in vector 'z' ";
    } 
    cout << "\n" << flush ;

    int result = count_if(
        y.begin() ,
        y.end() ,
        [](int n){
            return n % 2 == 0 ;
        }
    );
    cout << "the numeber apperas : " << result << " . times in the vector 'y' which has " << y.size() << " elements \n" << flush;

    
    vector<int> results(10);

    transform(
        y.begin(),
        y.end(),
        results.begin(),
        [](int n){
        return n * 10;
        }
    );


    for_each
    (
        results.begin(),
        results.end(),
        [](int n){
        cout << "" << n << " " << flush;
        }
    );

    cout << "\n" << flush ;


}