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

    return 0;
}







