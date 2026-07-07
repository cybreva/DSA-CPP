#include <iostream>
#include <unordered_set>

using namespace std;
int main(){
    
    unordered_multiset<int> ums;
    ums.insert(10);
    ums.insert(10);
    ums.insert(20);
    ums.insert(10);

    for(auto value :ums){
        cout << value << " " ;
    }

    cout << "\n" ;

}