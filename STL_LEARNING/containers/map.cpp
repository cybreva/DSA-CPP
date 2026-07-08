#include <bits/stdc++.h>
using namespace std;

int main(){

    map<int,string> students;

    int roll_number;
    string name;

    for(int i=1;i<=3;i++){

        cout<<"Enter roll number "<<i<<": ";
        cin>>roll_number;

        cin.ignore();

        cout<<"Enter name "<<i<<": ";
        getline(cin,name);

        students[roll_number]=name;
    }


    for(auto value: students){
        cout<<value.first<<" : "<<value.second<<"\n";
    }

}