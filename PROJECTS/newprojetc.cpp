#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <fstream>
#include <sstream>

using namespace std;

struct variables_banker{
    string name ;
    int ID ;
    string password ;
    bool banker_loggedin ;
    
};

struct variables_clients{

    string name ;
    int account_number ;
    string pin ;
    int account_balance ;
    bool client_loggedin ;
};

void greet(){
    cout << "===============\n"<<flush;
    cout << "====WELCOME====\n"<<flush;
    cout << "===============\n"<<flush;

}

vector<variables_banker> load_database_bankers() {

    ifstream file("database_bankers.csv");

    vector<variables_banker> bankers;

    if (!file.is_open()) {
        cout << "DATA NOT FETCHED\n" << flush ;
        return bankers;
    }

    string line;

    while (getline(file, line)) {

        stringstream ss(line);

        variables_banker banker;

        string id_str;
        string login_str;

        getline(ss, banker.name, ',');
        getline(ss, id_str, ',');
        getline(ss, banker.password, ',');
        getline(ss, login_str, ',');

        banker.ID = stoi(id_str);

        banker.banker_loggedin =
            (login_str == "true" || login_str == "1");

        bankers.push_back(banker);
    }

    file.close();

    return bankers;
}

vector<variables_clients> load_database_clients() {

    ifstream file("database_clients.csv");
    vector<variables_clients> clients;

    if (!file.is_open()) {
        cout << "DATA NOT FETCHED\n";
        return clients;
    }

    string line;

    while (getline(file, line)) {

        variables_clients client;

        stringstream ss(line);

        string account_number;
        string login_str;

        getline(ss, client.name, ',');
        getline(ss, account_number, ',');
        getline(ss, client.pin, ',');
        getline(ss, login_str, ',');

        client.account_number = stoi(account_number);

        client.client_loggedin =
            (login_str == "true" || login_str == "1");

        clients.push_back(client);
    }

    return clients;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    greet();

    
    

}