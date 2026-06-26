#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector <int> x = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    cout << "the vector before removing numbers : " << endl ;
    for_each
    (
        x.begin(),
        x.end(),
        [](int n){
        cout << "" << n << " "  ;
        }
    );
    cout <<"\n" << endl ;
    x.erase(
        remove_if(
            x.begin(),
            x.end(),
            [](int n){
                return n % 2 == 0;
            }
        ),
        x.end()
    );
    
    cout <<"\n" << endl ;
    cout << "the vector after removing numbers : " << endl ;

    for_each
    (
        x.begin(),
        x.end(),
        [](int n){
        cout << "" << n << " " ;
        }
    );
    cout <<"\n" << endl ;
}