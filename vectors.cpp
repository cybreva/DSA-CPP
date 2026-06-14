#include<iostream>
#include<vector>

using namespace std ;

struct account {

    string name ;
    int account_number ;
    int balance ;

};

int main (){

    vector <account> users ;
    
    
    for(int i = 0; i < 2; i++)
    {
        account temp;
        cout << "enter your detials : \n name \n account number \n balance \n ";
        cin >> temp.name;
        cin >> temp.account_number;
        cin >> temp.balance;

    users.push_back(temp);
    }


    
           

            
        
        
    string target;

    cout << "Enter Name To Search: ";
    cin >> target;

    bool found = false;

    for(int i = 0; i < users.size(); i++)
    {
        if(users[i].name == target)
        {
            found = true;

            cout << "\nAccount Found\n";
            cout << users[i].name << endl;
            cout << users[i].account_number << endl;
            cout << users[i].balance << endl;

            break;
        }
    }

if(!found)
{
    cout << "\nAccount Not Found\n";
}


}



















