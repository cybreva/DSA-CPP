#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> st ;
    multiset<int> mst;
    int numbers[] = 
    {
        10,3,7,10,3,2321,31312,343225,
        354,3465,334,33765,33567,
        3357,33765,3365,33765,
        33765,33765,3354343,
        33765,354765,33455
    };

    for(int value : numbers)
    {
        st.insert(value);
        mst.insert(value);
    }

    //display set f
     cout << "Set elements: ";
    for (auto x : st)
        cout << x << " ";

    cout << "\n";

    // display multiset
     cout << "Multiset elements: ";
    for (auto x : mst)
        cout << x << " ";

    cout << "\n";
    

    
   





    

}