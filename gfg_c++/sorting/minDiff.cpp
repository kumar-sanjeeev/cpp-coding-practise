/**
 * @file minDiff.cpp
 * @author Sanjeev Kumar
 * @brief Find the minimum difference btw the arrays elements
 * @version 0.1
 * @date 2022-07-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int size){
    for(int i=0; i<size; ++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

// Naive Solution
int minDiff(int a[], int size){
    int result = INT_MAX;

    for(int i=0; i<size; i++){
        for(int j=0; j<i; j++)
        {
            result = min(result, abs(a[i]-a[j]));
        }
    }

    return result;
}

// efficient solution

int effi_minDiff(int a[], int size){

    // sorting the input array
    sort(a, a+size);
    printArray(a,size);
    int result = INT_MAX;

    for(int i=1; i<size; i++){
        result = min(result,(a[i]-a[i-1]));
    }
    return result;
}
int main(){
    cout<<"Enter the no of test cases: ";
    int t;
    cin>>t;
    while(t--){

        cout<<"\nEnter the size of array: ";
        int size;
        cin>>size;
        int a[size];
        cout<<"\nEnter the elements of the array: ";
        for(int i=0; i<size; ++i){
            cin>>a[i];
        }
        printArray(a,size);
        cout<<endl;
        // cout<<minDiff(a,size);
        cout<<effi_minDiff(a,size);
        cout<<endl;
    }
    return 0;
}