#include <iostream>
#include <stack>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){

    stack<int> st ;

    //push
    st.push(100);
    st.push(1234);
    st.push(1432);
    st.push(1324);
    st.push(1456430);
    st.push(4300);
    st.push(10345430);
    st.push(100543);
    st.push(100435);
    st.push(10053466);
    st.push(10073437);
    st.push(100376);

    //pop
    st.pop();
    st.pop();
    st.pop();

    //others

    st.top();
    st.empty();
    st.size();

    stack<int> temporary_stack = st;
    //display

    while (!st.empty()){
        cout << st.top() << "" ;
        st.pop();
    }

    
}