#include <iostream>
#include<string>

int main(){
    
    int choice ; 

    std :: cout << "1.addition\n";
    std :: cout << "2.subtraction\n";
    std :: cout << "3.multiplication\n";
    std :: cout << "4.division\n";

    std :: cout << "ENTER CHOICE\n";
    std :: cin >> choice;


    switch(choice) {

        case 1 :
            std :: cout << "addition  selected\n";
            break;
        
        case 2 :
            std :: cout << "subtraction  selected\n";
            break;

        case 3 :
            std :: cout << "multiplication  selected\n";
            break;

        case 4 :
            std :: cout << "division  selected\n";    
            break;
       
        default :
            std::cout << "Invalid choice\n";


    }


    return 0;



    }














