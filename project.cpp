#include <iostream>
#include <string>

using namespace std;

void welcome()
{
    cout << "================================\n";
    cout << "      WELCOME TO CITY BANK      \n";
    cout << "================================\n";
}

string name_input()
{
    string name;

    cout << "\nEnter Your Name : ";
    cin >> name;

    return name;
}

int acc_number_input()
{
    int account_number;

    cout << "Enter Account Number : ";
    cin >> account_number;

    return account_number;
}

int pin_input()
{
    int pin;

    cout << "Enter PIN : ";
    cin >> pin;

    return pin;
}
int check_balance(){

    int balance = 1000 ;
    cout << "your account balance is : $ " << balance << "\n";
    return balance ;

}

int main()
{
    welcome();

    string name = name_input();

    int account_number = acc_number_input();

    int balance = check_balance();

    int choice ;

    if (account_number != 1234)
    {
        cout << "\nAccount Not Found!\n";
        return 0;
    }

    int pin;

    do
    {
        pin = pin_input();

        if (pin != 7221)
        {
            cout << "Wrong PIN! Try Again.\n";
        }

    } while (pin != 7221);

    cout << "\nLogin Successful!\n";
    cout << "Welcome, " << name << "!\n";


    
    cout << "What Do You Want To Do \n";
    cout << "1. Check Balance\n 2. Deposit Money\n 3. Widhraw Money 4.";

    if (choice ==1){

        cout << "======Balance======\n";
        cout <<"your account balance is" << balance <<"\n";
        
    }

    else if ( choice == 2){

        cout << "please enter the ammount you want to add";
        cout << " 1  2  3  4";
        cout << " 5  6  7  8";
        cout << " ❌  9  0 ✅";

    }









    return 0;
}







