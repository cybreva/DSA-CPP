#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> prices = {7,1,5,3,6,4};

    int MinPrice = prices[0];
    int MaxProfit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        
        if(prices[i] < MinPrice)
        {
            MinPrice = prices[i] ;
        }
        
        if(prices[i] - MinPrice > MaxProfit)
        {
            MaxProfit = prices[i] - MinPrice ;
        }
    }
    
    cout << "Maximum Profit = " << MaxProfit << '\n';

    return 0;
}