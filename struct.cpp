#include <iostream>
using namespace std ;

struct Student{
    string name ;
    int age ;

};

int main()
{
    Student s1;

    cout << "Enter Name: ";
    cin >> s1.name;

    cout << "Enter Age: ";
    cin >> s1.age;

    cout << "\nName: " << s1.name << endl;
    cout << "\nAge: " << s1.age << endl;
}