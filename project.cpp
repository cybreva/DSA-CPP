#include <iostream>
#include <string>
#include <fstream>

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

int check_balance(int balance)
{
    cout << "\n===== ACCOUNT BALANCE =====\n";
    cout << "Your Balance : $" << balance << "\n";

    return balance;
}

int deposit_money(int balance)
{
    int amount;

    cout << "\nEnter Amount To Deposit : $";
    cin >> amount;

    balance = balance + amount;

    cout << "Money Deposited Successfully!\n";
    cout << "New Balance : $" << balance << "\n";

    return balance;
}

int withdraw_money(int balance)
{
    int amount;

    cout << "\nEnter Amount To Withdraw : $";
    cin >> amount;

    if (amount <= balance)
    {
        balance = balance - amount;

        cout << "Withdrawal Successful!\n";
        cout << "Remaining Balance : $" << balance << "\n";
    }
    else
    {
        cout << "Insufficient Balance!\n";
    }

    return balance;
}
int change_pin()
{
    int old_pin;

    do
    {
        cout << "Enter Old PIN : ";
        old_pin = pin_input();

        if(old_pin != 7221)
        {
            cout << "Wrong PIN! Try Again.\n";
        }

    } while(old_pin != 7221);

    int new_pin;

    cout << "Enter New PIN : ";
    cin >> new_pin;

    cout << "PIN Changed Successfully!\n";

    return new_pin;
}


int main()
{
    welcome();

    string name = name_input();

    int account_number = acc_number_input();

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

    int balance = 1000;
    int choice;

    do
    {
        cout << "\n\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Change Pin \n";
        cout << "5. Exit\n";

        cout << "\nEnter Your Choice : ";
        cin >> choice;

        if (choice == 1)
        {
            check_balance(balance);
        }
        else if (choice == 2)
        {
            balance = deposit_money(balance);
        }
        else if (choice == 3)
        {
            balance = withdraw_money(balance);
        }
        else if (choice == 4)
        {
            pin = change_pin();
            
        }
        else if (choice == 5){
            cout << "\nThank You For Using City Bank!\n";
        }
        else
        {
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}







