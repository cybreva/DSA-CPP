#include <iostream>
#include <string>

int main(){
    
    
    
    //name input
    
    std :: string name ;
    std :: cout << "welcome user \n";
    std :: cout << " please enter your name : ";
    std :: cin >> name ;
    
    //choice input
    
    int choice ; 

    std :: cout << "welcome to our mini calculator programme , " << name << "\n provided operations are : \n";

    std :: cout << "1.addition\n";
    std :: cout << "2.subtraction\n";
    std :: cout << "3.multiplication\n";
    std :: cout << "4.division\n";

    std :: cout << "ENTER CHOICE\n";
    std :: cin >> choice;
    
    //numbers input taking (assuming x is greater than y)
        float x ;
        float y ;
        float z ;
  
    //switch case 
    
    switch(choice)
   {
    case 1:
    //addition

    

        std :: cout << "\nENTER FIRST NUMBER: ";
        std :: cin >> x;
        std :: cout << "\nENTER SECOND NUMBER :";
        std :: cin >> y;


        std :: cout << "you choosed addition\n";
        
        z = x+y;
       
        std :: cout << "your output is " << z << "\n";
        break;

    case 2:
        // subtraction


        
        std :: cout << "\nENTER FIRST NUMBER: ";
        std :: cin >> x;
        std :: cout << "\nENTER SECOND NUMBER :";
        std :: cin >> y;


        std :: cout << "you choosed subtraction";

        z = x - y ;

        std :: cout << "your output is " << z << "\n";
        break;

    case 3:
        // multiplication



        

        std :: cout << "\nENTER FIRST NUMBER: ";
        std :: cin >> x;
        std :: cout << "\nENTER SECOND NUMBER :";
        std :: cin >> y;


        std :: cout << "you choosed multiplication";

        z = x*y;

        std :: cout << "your output is " << z << "\n";
        break;

    case 4:
        // division


       

        std :: cout << "\nENTER FIRST NUMBER: ";
        std :: cin >> x;
        std :: cout << "\nENTER SECOND NUMBER :";
        std :: cin >> y;

        
        std :: cout << "you choosed division";

        z = x/y;

        std :: cout << "your output is " << z << "\n";
        break;

    default:
        // invalid

        std :: cout << "ivalid operation";
}





}