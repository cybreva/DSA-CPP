#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

int main(){
    array<int,1000> a{};
    vector<int> v(1000);

    int sum ;
    cout << "emter mnumber" ;
    cin >> sum ;


    for (int i = 0; i < 1000; i++)
    {
        a[i] += sum;
    }

    for (int i = 0; i < 1000; i++)
    {
        v[i] += sum;
    }


  
    for_each(
        v.begin(),
        v.end(),
        [](int n){
            cout << n << " " << flush ;
        }
    );
    for_each(
        a.begin(),
        a.end(),
        [](int n){
            cout << n << " " << flush ;
        }
    );
}