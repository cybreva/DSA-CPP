#include <iostream>
#include <string>

using namespace std;

void welcome() {
    cout << "========WELCOME=========\n===========CITY BANK=========\n";
}

string name_input() {

    string name;

    cout << "\nENTER YOUR NAME : ";
    cin >> name;

    return name;
}

int acc_number_input() {

    int account_number;

    cout << "\nPLEASE ENTER YOUR ACCOUNT NUMBER : ";
    cin >> account_number;

    return account_number;
}
int pin_account (){
    
    int pin_account;
    
    cout << " please enter your pin ";
    
    cin >> pin_account ;
    
    return pin_account ;
}

int main() {

    welcome();

    string name = name_input();

    int account_number = acc_number_input();


    int pin ;

    
   do{  
    
        pin = pin_account() ;

        cout << "  PLEASE ENTER YOUR PIN  ";
        cin >> pin ;

        if(pin != 7221)
        {
            cout << "Wrong PIN! Try Again.\n";
        }

    }
    while (pin != 7221);

    return 0;
}












