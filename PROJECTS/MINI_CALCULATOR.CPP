#include <iostream>
#include <string>

int main(){
    
    
    
std::string name;

std::cout << "=================================\n";
std::cout << "      MINI CALCULATOR\n";
std::cout << "=================================\n";

std::cout << "\nEnter your name: ";
std::cin >> name;

int choice;

std::cout << "\nWelcome, " << name << "!\n";

std::cout << "\nAvailable Operations:\n";
std::cout << "1. Addition\n";
std::cout << "2. Subtraction\n";
std::cout << "3. Multiplication\n";
std::cout << "4. Division\n";

std::cout << "\nEnter your choice: ";
std::cin >> choice;

float x, y, z;

switch(choice)
{
    case 1:
        //addition

    

       
        std::cout << "\n=== ADDITION ===\n";

        std::cout << "ENTER FIRST NUMBER : ";
        std::cin >> x;

        std::cout << "ENTER SECOND NUMBER : ";
        std::cin >> y;

        z = x + y;

        std::cout << "\nRESULT = " << z << "\n";
        break;

    case 2:
       
        std::cout << "\n=== SUBTRACTION ===\n";

        std::cout << "ENTER FIRST NUMBER : ";
        std::cin >> x;

        std::cout << "ENTER SECOND NUMBER : ";
        std::cin >> y;

        z = x - y;

        std::cout << "\nRESULT = " << z << "\n";
        break;;

    case 3:
        
        std::cout << "\n=== MULTIPLICATION ===\n";

        std::cout << "ENTER FIRST NUMBER : ";
        std::cin >> x;

        std::cout << "ENTER SECOND NUMBER : ";
        std::cin >> y;

        z = x * y;

        std::cout << "\nRESULT = " << z << "\n";
        break;

    case 4:
      
        std::cout << "\n=== DIVISION ===\n";

        std::cout << "ENTER FIRST NUMBER : ";
        std::cin >> x;

        std::cout << "ENTER SECOND NUMBER : ";
        std::cin >> y;

        z = x / y;

        std::cout << "\nRESULT = " << z << "\n";
        break;

    default:
        // invalid

        std :: cout << "ivalid operation";
}





}