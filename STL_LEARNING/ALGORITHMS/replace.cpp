#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout << "\n";
    vector <int> x = {1,2,3,4,5,6,7,8,9,10,22,13,14,15,16,17,18,19,20} ;
    cout << "the vector is : " << endl; 
    for_each(
        x.begin(),
        x.end(),
        [](int n){
            cout << n << " " ;
        }
    );
    cout << "\n";
    cout <<  endl;

    int target ;
    cout << "enter the numebr which you want to replace : " ;
    cin >> target ;
    cout << "\n";
    cout <<  endl;
    int target2 ;
    cout << "enter the numebr you want to replace " << target << " with : " ;
    cin >> target2 ;
    cout << "\n";
   /* replace(
        x.begin(),
        x.end(),
        target ,
        target2
    );*/

   /* for_each(
        x.begin(),
        x.end(),
        [](int n){
            cout << n << " " ;
        }
    );
    cout << "\n"; */

    replace_if(
        x.begin(),
        x.end(),
        [target](int n ){
            return n == target ;
        },
        target2
    );

    for_each(
        x.begin(),
        x.end(),
        [](int n){
            cout << n << " " ;
        }
    );
    cout << "\n";
}
