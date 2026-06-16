#include <iostream>
using namespace std ;

struct account{
    string name ;
    
    int balance ;

    int account_number;

};

int main (){

    account users[2];

    for(int i = 0; i < 2; i++)
{
    cout << "Name: ";
    cin >> users[i].name;

    cout << "Account Number: ";
    cin >> users[i].account_number;

    cout << "Balance: ";
    cin >> users[i].balance;

    int search_account;

    cout << "\nEnter Account Number To Search: ";
    cin >> search_account;
}

    int search_account;

    cout << "\nEnter Account Number To Search: ";
    cin >> search_account;


    for(int i = 0; i < 2; i++)
{
    if(users[i].account_number == search_account)
    {
        cout << "\nAccount Found\n";

        cout << users[i].name << endl;
        cout << users[i].balance << endl;
    }
}
}