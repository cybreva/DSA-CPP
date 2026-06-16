#include <iostream>
#include<string>

int main(){

    std :: string name ;
    std :: cout << "\nenter name : ";
    std :: cin >> name ;


    int age ;
    std :: cout << "\nenter your age :" ; 
    std :: cin >> age ;


    float height ;
    std :: cout << "\nenter your height (in m) :";
    std :: cin >> height ;


    float weight ;
    std :: cout << "\nenter your weight (in Kg's) : ";
    std :: cin >> weight ;

    float x = weight/(height*height) ;

    if(x<18.5){

        std :: cout << "you are under weighted\n . your BMI is " << x << "\n";
    }

    else if (x>18.5 && x<24.9){
        
        std :: cout << "you are healthy \n . your BMI is " << x << "\n";

    }

    else if (x>24.9 && x<29.9){

        std :: cout << "you are a little over weighted\n . your BMI is " << x << "\n";

    }

    else if ( x>29.9){

        std :: cout << "you are Obesitive \n . your BMI is " << x << "\n";
    }

    else {

        std :: cout << "its okay !!\n";
    }






}