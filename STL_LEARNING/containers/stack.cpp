#include <iostream>
#include <stack>

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

    // Stack information

    int top_value = st.top();
    cout << "the value at top is : " << top_value << " \n " ;
    bool is_empty = st.empty();

    cout << "Is the stack empty : " << boolalpha << is_empty << '\n';
    
    size_t stack_size = st.size();
    cout << "the size of stack : " << stack_size << " \n " ;
    
    //temporary stack
    stack<int> temporary_stack = st;
    
    //display

    while (!temporary_stack.empty())
    {
        cout << temporary_stack.top() << ' ';
        temporary_stack.pop();
    }

    cout << '\n';
}