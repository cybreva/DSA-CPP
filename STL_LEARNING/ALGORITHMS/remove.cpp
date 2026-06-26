#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector <int> x = {10,10,23,213,3245,435,43,2314,54,342,756,243,867,423,54,45,56,65};
    
    int target ;
    cout << "enter targeted number" << endl;
    cin >> target;
    auto it = remove(
        x.begin() ,
        x.end() ,
        target 
    );

    

    x.erase(it, x.end());
    
    for (int n : x)
    {
        cout << n << " ";
    }

    cout << "\n" << endl;
    //erase remove idiom
    int value ;
    cout << "enter value :" << endl ;
    cin >> value ;
    
    x.erase(remove(x.begin(), x.end(), value), x.end());

     

    for (int n : x)
    {
        cout << n << " ";
    }

    cout << "\n" << endl;
    
}