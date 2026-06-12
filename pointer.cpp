#include <iostream>
using namespace std;

int main(){
    int x = 10; // variable declared
    int* myptr; // pointer variable

    
    myptr = &x;

    cout << "Value of x is: ";
    cout << x << "\n";

    // print the address stored in myptr pointer variable
    cout << "Address stored in myptr is: ";
    cout << myptr << "\n";

    // printing value of x using pointer myptr
    cout << "Value of x using *myptr is: ";
    cout << *myptr << "\n";

    return 0;
}