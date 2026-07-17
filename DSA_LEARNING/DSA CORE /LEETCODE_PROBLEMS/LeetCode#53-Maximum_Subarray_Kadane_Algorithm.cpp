#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> nums = {1,2,3,4,5} ;
    
    
    int currentSum = nums[0];
    int maxSum = nums[0];

    for(int i = 1; i < nums.size(); i++)
    {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    cout << "\n" <<  maxSum << "\n";
}