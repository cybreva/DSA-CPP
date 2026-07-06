#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> st ;
    multiset<int> mst;
    //declaration of set
    st.insert(10);
    st.insert(3);
    st.insert(7);
    st.insert(10);
    st.insert(3);
    st.insert(2321);
    st.insert(31312);
    st.insert(343225);
    st.insert(354);
    st.insert(3465);
    st.insert(334);
    st.insert(33765);
    st.insert(33567);
    st.insert(3357);
    st.insert(33765);
    st.insert(3365);
    st.insert(33765);
    st.insert(33765);
    st.insert(33765);
    st.insert(3354343);
    st.insert(33765);
    st.insert(354765);
    st.insert(33455);

    //multiset declaraton
    mst.insert(10);
    mst.insert(3);
    mst.insert(7);
    mst.insert(10);
    mst.insert(3);
    mst.insert(2321);
    mst.insert(31312);
    mst.insert(343225);
    mst.insert(354);
    mst.insert(3465);
    mst.insert(334);
    mst.insert(33765);
    mst.insert(33567);
    mst.insert(3357);
    mst.insert(33765);
    mst.insert(3365);
    mst.insert(33765);
    mst.insert(33765);
    mst.insert(33765);
    mst.insert(3354343);
    mst.insert(33765);
    mst.insert(354765);
    mst.insert(33455);
    

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