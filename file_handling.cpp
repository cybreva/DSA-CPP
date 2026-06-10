#include <iostream>
#include <string>
#include <fstream>

using namespace std ;

void input (){

    
    ofstream file("test.txt");
    
    file << "tanmay";
    
    file.close();
    
    cout << "done";

   

}

void output (){


    ifstream file ("test.txt");

    string name ;

    file >> name ;

    cout << name ;

    file .close();
}

int main (){
    
    int choice ;
    cout << "what do you want to do with file\n";
    cout << "1.input\n2.output\n3.exit\n";
    cin >> choice ;
    do{
    if (choice == 1){
    input() ;}
    else if (choice == 2){
        output () ;}
    else if (choice == 3){
        cout << "byy";
    }
    
    else{ 
        cout << "wrong input";
    }}
    while(choice != 3);
}