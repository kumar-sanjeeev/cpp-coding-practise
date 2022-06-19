/**
 * @file peakElement.cpp
 * @Sanjeev Kumar
 * @find a peak element in the unsorted array
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int peakElement(int a[], int size){
    int low = 0;
    int high = size-1;

    while(low<=high){
        int mid = (low+high)/2;

        if((mid==0||a[mid-1]<=a[mid]) && (mid==size-1 || a[mid+1]<=a[mid])){
            return mid;
        }
        if((mid>0 && a[mid-1]>a[mid])){
            high = mid-1;
        }
        else
        low = mid+1;
    }
    return -1;
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
        printArray(a,size);
        cout<<"Peak Element in the array is: "<<a[peakElement(a,size)];

    }
    return 0;
}