#include <iostream>
#include <string>

using namespace std;

class students
{
    public:
        string name ;
        int age ;
        string roll_no ;
        string id ;
};

int main(){
    students s1 ;
    s1.name = "tanmay";
    s1.age = 18;
    s1.roll_no = "31622696" ;
    s1.id = "tanmay@college.com" ;
    cout << " name of student is : " << s1.name << "\n age : " << s1.age 
         << "\n roll no  : " << s1.roll_no << "\n id = " << s1.id << "\n";
}