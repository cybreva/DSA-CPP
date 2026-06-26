#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "\n" << flush;

    vector <int> x = {1,2,3,4,5,6,7,8,9,10};
    vector <int> y(5) ;
    vector <int> z(10);
    cout << "\n" << flush;
    cout << "vector y is empty " << flush ;
    cout << "\n" << flush;
    cout << "vector z is empty " << flush ;
    cout << "\n" << flush;
    cout << "\n" << flush;
    cout << "vector x = : " << "\n" <<  flush ;
    

    for_each(
        x.begin(),
        x.end(),
        [](int n){
            cout << n << " " << flush ;
        }
    );

    cout << "\n" << flush;

    copy_if(
        x.begin(),
        x.end(),
        y.begin(),
        [](int n){
            return n % 2 == 0 ;
        }
    );
    cout << "\n" << flush ;
    cout << "now the vector 'y' is even " << "\n" << flush ;

    for_each(
        y.begin(),
        y.end(),
        [](int n){
            cout << n << " " << flush ;
        }
    );

    cout << "\n" << flush ;

    copy(
        x.begin(),
        x.end(),
        z.begin()
    );

    cout << "\n" << flush ;

    for_each(
        z.begin(),
        z.end(),
        [](int n){
            cout << n << " " << flush ;
        }
    );


}