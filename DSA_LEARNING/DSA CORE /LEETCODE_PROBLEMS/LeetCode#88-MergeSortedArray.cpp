#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int nums1[] = {2,2,3,0} ;
    int k = sizeof(nums1)/sizeof(nums1[0]);
    int nums2[] = {1000};
    int n = sizeof(nums2)/sizeof(nums2[0]);
    int m = k - n ;
    int last = m + n - 1;
    while( m > 0 && n > 0)
    {
        if(nums1[m-1] > nums2[n-1])
        {
            nums1[last] = nums1[m-1];
            m--;
        } 
        else 
        {
            nums1[last] = nums2[n-1];
            n--;
        }
        last--;
    }
    while(n>0)
    {
        nums1[last] = nums2[n-1];
        last--;
        n--; 
    }
    for(int i = 0 ; i < k ; i++) {
        cout << nums1[i] << " " << flush ;
    }
}