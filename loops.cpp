#include <iostream>
#include <string>


using namespace std ;


int main (){
    
   

    //for loop 

    //printing even numbers
    for (int i = 0 ; i<=13; i = i+2 ){
         
        cout << i << ". hello world \n";
         
        
    }

    //printing odd numbers
    for (int i =1 ; i<=13; i = i+2 ){
         
        cout << i << ". hello world \n";
         
        
    }
    //printing dot-line pattern (inverted)
    for (int line = 13 ; line >=1;line--){

        for (int dot = 1; dot <= line; dot++) {
            cout << ".";
        }
        cout <<  "\n";
    }
    //printing dot-line pattern
    for (int line = 1 ; line <=13;line++){

        for (int dot = 1; dot <= line; dot++) {
            cout << ".";
        }
        cout <<  "\n";
    }



    //WHILE LOOP 

    //1----->100

    int i = 1 ;

    while(i<=100){
        cout<<"\n"<<i<<"\n";
        i++;
    }

    //100----1

    int j = 100 ;

    while(j>=1){
        cout<<"\n"<<j<<"\n";
        j--;
    }




}