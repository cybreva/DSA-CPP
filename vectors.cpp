#include<iostream>
#include<vector>

using namespace std ;

int main(){


    vector <int> numbers ;

    numbers.push_back(50);
    numbers.push_back(70);
    numbers.push_back(80);

    for(int i = 0 ; i < numbers.size() ; i++){

        cout << numbers[i] << "\n";
    }
}