#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //can show tle
    int StockPrice[] = {7,1,5,3,6,4} ;
    size_t n = sizeof(StockPrice)/sizeof(StockPrice[0]) ;
    int MaxProfit = 0 ;
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if( (StockPrice[j] - StockPrice[i]) > MaxProfit )
            {
               MaxProfit = StockPrice[j] - StockPrice[i] ;
            }
            
        }
    }
    
}