#include <iostream>
using namespace std ;

struct student{
    string name ;
    int age ;

};

int main(){

    student s1 ;
        s1.name = "tanmay";
        s1.age = 18;

    cout << s1.name << endl ;
    cout << s1.age << endl ;


}