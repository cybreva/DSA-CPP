#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;


int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);


    vector<int> x = {1,2,3,4,5};

    for_each
    (
        x.begin(),
        x.end(),
        [](int n){
        cout << "" << n << " " << flush;
        }
    );

    cout << "\n" << flush ; 

    cout << "\n" << flush ;


    fill
    (
        x.begin()+1,
        x.end()-1,
        100
    );


    for_each
    (
        x.begin(),
        x.end(),
        [](int n){
        cout << "" << n << " " << flush;
        }
    );
    
    cout << "\n" << flush ; 
    
    cout << "\n" << flush ;

    fill_n
    (
        x.begin(),
        4,
        999
    );
    
    for_each
    (
        x.begin(),
        x.end(),
        [](int n){
        cout << "" << n << " " << flush;
        }
    );

    cout << "\n" << flush ; 
    
    cout << "\n" << flush ;


    vector<int> g(5);

    int value = 10;

    generate
    (
        g.begin(),
        g.end(),
        [&](){
            return value += 10;
        }
    );

    for_each
    (
        g.begin(),
        g.end(),
        [](int n){
        cout << "" << n << " " << flush;
        }
    );

    cout << "\n" << flush ; 
    
    cout << "\n" << flush ;
}