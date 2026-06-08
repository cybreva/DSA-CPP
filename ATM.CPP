#include <iostream>
#include <string>

using namespace std ;

int main (){
    
    string name ;
    cout << "{(=======WELCOME=======)} \n PLEASE ENTER YOUR NAME : ";
    cin >> name ;

    
    cout  << "{(====WELCOME "<< name << " TO CITY BANK ATM =========)}\n";
    int pin ;
    
    do{
        cout << "  PLEASE ENTER YOUR PIN  ";
        cin >> pin ;

        if(pin != 7221)
        {
            cout << "Wrong PIN! Try Again.\n";
        }
    }
    while (pin != 7221);









}