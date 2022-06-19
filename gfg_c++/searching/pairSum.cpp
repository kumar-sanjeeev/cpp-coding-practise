/**
 * @file pairSum.cpp
 * Sanjeev Kumar
 * Fird a pair in the given sorted array who's sum is equal to given sum
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

bool isPair(int a[], int size, int x){
    int left=0;
    int right=size-1;

    while (left<right)
    {
        if(a[left]+a[right]==x){
            return true;
        }
        else if(a[left]+a[right]>x){
            right--;
        }
        else{
            left++;
        }
    }
    return false; 
}
void printArray(int a[], int size){
    for(int i=0; i<size; ++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
        int x;
        cout<<"Enter the value of x: ";
        cin>>x;
        cout<<endl;
        printArray(a,size);
        cout<<"Is pair having sum: "<<x<<" present "<<isPair(a,size,x)<<endl;

    }
    return 0;
}