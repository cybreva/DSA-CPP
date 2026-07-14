#include <iostream>
#include <string>

using namespace std;

class student
{
    public:
        string name ;
        int age ;
        string roll_no ;
        string id ;
};

int main(){
    student s1 ;
    s1.name = "tanmay";
    s1.age = 18;
    s1.roll_no = "31622696" ;
    s1.id = "tanmay@college.com" ;
    cout << "\n name of the first student is : " << s1.name << "\n age : " << s1.age 
         << "\n roll no  : " << s1.roll_no << "\n id = " << s1.id << "\n";
    
    student s2 ;
    s2.name = "Rahul";
    s2.age = 19;
    s2.roll_no = "31622697";
    s2.id = "rahul@college.com";
    cout << "\n name of the second student is : " << s2.name << "\n age : " << s2.age 
         << "\n roll no  : " << s2.roll_no << "\n id = " << s2.id << "\n";

    student s3 ;
    s3.name = "Priya";
    s3.age = 18;
    s3.roll_no = "31622698";
    s3.id = "priya@college.com";
    cout << "\n name of the third student is : " << s3.name << "\n age : " << s3.age 
         << "\n roll no  : " << s3.roll_no << "\n id = " << s3.id << "\n";
}