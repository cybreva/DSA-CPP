#include <iostream>
using namespace std ;

struct account{
    string name ;
    
    int balance ;

};


int main (){

    account user1 ;

    cout << "Name: ";
    cin >> user1.name;

    cout << "Balance: ";
    cin >> user1.balance;

    cout << "\nAccount Details\n";

    cout << user1.name << endl;
    cout << user1.balance << endl;

    account user2;
    cout << "Name: ";
    cin >> user2.name;

    cout << "Balance: ";
    cin >> user2.balance;

    cout << "\nAccount Details\n";

    cout << user2.name << endl;
    cout << user2.balance << endl;






}