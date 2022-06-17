/**
 * @file sqrt.cpp
 * @Sanjeev Kumar
 * @Given an integer, find the floor of its square root
 * @version 0.1
 * @date 2022-06-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int custom_srqt(int x){
    int low=1;
    int high = x;  // as per me high can also be x/2 
    int ans = -1;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid>x){
            high = mid-1;
        }
        else{
            low = mid+1;
            ans = mid;
        }
    }
    return ans;
}

int main(){
    cout<<"Enter the no of test cases: ";
    int t;
    cin>>t;
    while(t--){
        int x;
        cout<<"Enter the value of x: ";
        cin>>x;
        cout<<endl;
        cout<<custom_srqt(x)<<endl;
        
    }
    return 0;
}