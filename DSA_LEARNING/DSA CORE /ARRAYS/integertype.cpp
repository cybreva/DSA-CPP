#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[] = {
         0, -1, 999, -500, 42,
        -7,  0,  13, -99, 88,
         0, 65, -31,   2, -18,
        77,  0, -64,  19, -5,
        36, -72,   0, 91, -11,
         4, -28,  57,   0, -90,
        18, -45,  83,   0, -12,
        60, -39,  27,  -3,   0 };
    size_t n = sizeof(arr)/sizeof(arr[0]) ;

    int positiveCount = 0 ;
    int negativeCount = 0;
    int zeroes = 0;

    for (size_t i = 0 ; i < n ; i++) {
        if (arr[i] > 0)
        {
            positiveCount++;
        }
        else if (arr[i] < 0)
        {
            negativeCount++;
        }
        else
        {
            zeroes++;
        }
    } 
    cout << "the number of occorences of positive integers is : "  << positiveCount << "\n"
         << "the number of occurencec of negative integers is : "  << negativeCount << "\n"
         << "the number of occurences of zeroes is  : " << zeroes << "\n" << flush ;
        }