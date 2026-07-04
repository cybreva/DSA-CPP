#include <iostream>
#include <queue>

using namespace std;

int main(){

    priority_queue <int> pq ;
    int values[] =  {1213,1234,3,345,5464,2345,546,23,45,234,3,5,563,534,5,34};

    for (int value : values){
        pq.push(value);
    }

    priority_queue<int> temp = pq ;

    while (!temp.empty()) 
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << '\n';

            
    bool isEmpty = pq.empty(); 
    if(!isEmpty){
        cout << "the priority queue is empty : " << "yes !" << "\n" ;
    }     
    else {cout << "the priority queue is empty : " << "no !" << "\n" ;}
    size_t size = pq.size();  
    cout << "size of priority queue is  : " << size << "\n" ;     
    
}
