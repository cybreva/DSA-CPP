#include <iostream>
#include <vector>

using namespace std ;

int main(){

    
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);
//numbers = {10,20,30,40,50}
    int target;

    cout << "Enter Number To Search: ";
    cin >> target;

    bool found = false;

    for(int i = 0; i < numbers.size(); i++)
    {
        if(numbers[i] == target)
        {
            found = true;
            break;
        }
    }


    if(found)
    {
        cout << "Number Found";
    }
    else
    {
        cout << "Number Not Found";
    }


}