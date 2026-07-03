#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<long long> q;

    long long value[] = {
        1000,75467,76,56,75467,4,7,4,74,7,467,4,67,467,4764674,47747,7656473,745745,34535443534,34543643,56};
    
    
    for(long long values : value){q.push(values) ; }      
    q.pop();       
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    long long front_element = q.front();      
    bool isEmpty = q.empty();
    size_t size_queue = q.size();

    cout << "the element in front of queue : " << front_element << "\n" 
         << "is the queue empty : " << boolalpha << isEmpty << "\n"
         << "the size of queue : " << size_queue << "\n" 
          << "the element at back of queue : " << q.back() << '\n';
    
    



}