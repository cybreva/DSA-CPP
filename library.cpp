#include <iostream>
#include <vector>
#include <ctime>
#include<fstream>

using namespace std;

struct librariandata{
    string librarian_name;
    int librarian_id ;
    int librarian_pin;
};

struct userdata{
     string user_name;
     string book_name;

};

string librarian_name_input(){
    librariandata librarian ;
    cout << "PLEASE ENTER YOUR NAME : ";
    cin >> librarian.librarian_name ;
    string &lib_name = librarian.librarian_name ;
    return lib_name;

}
int librarian_id_input(){
    librariandata librarian ;
    cout << "PLEASE ENTER YOUR ADMIN_ID : ";
    cin >> librarian.librarian_id ;
    int &lib_id = librarian.librarian_id;
    int attempts = 0;

    while(attempts < 3)
    {
        cin >> lib_id;

        if(lib_id == 12345)
        {
            cout << "DATA FETCHED\n";
            break;
        }
        else {
            cout << "NO ACCOUNT OF THIS ID EXIST IN DATABASE \nIF YOU ARE A NON REGISTERED MEMBER CONTACT TO ADMIN ASAP!\n";
              
        }

        attempts++;
    }
    return lib_id;

}
int librarian_pin_input(){
    librariandata librarian ;
    cout << "PLEASE ENTER YOUR PIN : ";
    cin >> librarian.librarian_pin ;
    int &lib_pass = librarian.librarian_pin ;
    int attempts = 0 ;
    
    while(attempts < 3)
    {
        cin >> lib_pass;

        if(lib_pass == 12345)
        {
            cout << "LOGINS SUCCESSFULL\n";
            break;
        }
        else {
            cout << "INCORRECT PASSWORD \nIF YOU FORGET YOUR PASSWORD CONTACT TO ADMIN ASAP!\n";
              
        }

        attempts++;
    }
    return lib_pass;

}
string get_current_date()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    return to_string(ltm->tm_mday) + "-" +
           to_string(ltm->tm_mon + 1) + "-" +
           to_string(ltm->tm_year + 1900);
}

void issue_book()
{
    userdata user;
    
    ofstream file("history.csv", ios::app);
    
    cout << "Enter User Name : ";
    file << user.user_name;

    cout << "Enter Book Name : ";
    file << ","<<;
    

    file << type << "," << amount << "\n";

    file.close();
}


int main (){
    librarian_name_input();
    librarian_id_input();
    librarian_pin_input();

    cout << "===========================\n";
    cout << "           WELCOME         \n";
    cout << "===========================\n";

    
     do
    {
        cout << "\n\n===== ATM MENU =====\n";
        cout << "1. Issue Book\n";
        cout << "2. Check Record\n";
        cout << "3. Exit\n";

        cout << "\nEnter Your Choice : ";
        cin >> choice;

       switch (choice)
        {
            case 1:
                check_balance(balance);
                break; 

            case 2:
                balance = deposit_money(balance);
                break;

            case 3:
                balance = withdraw_money(balance);
                break;

            
            default:
                cout << "\nInvalid Choice! Try Again.\n";
                break;
        }

    } while (choice != 3);
}