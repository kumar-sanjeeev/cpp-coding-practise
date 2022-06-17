/**
 * @file occurenceof1.cpp
 * @Sanjeev Kumar
 * @Count the occcurence of Ones in the sorted binary array
 * @version 0.1
 * @date 2022-06-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;

int first_occurence(int a[], int size, int x){
    int low = 0;
    int high = size-1;

    while(low<=high){
        int mid = (low + high)/2;

        if(a[mid]<x)
        {
            low = mid +1;
        }
        else if (a[mid]>x)
        {
            high = mid -1;
        }
        else
        {
            if(a[mid-1]!=a[mid] || mid==0){
                return mid;
            }
            else
            {
                high = mid-1;
            }
        }
    }
    return -1;
}

int count1_occurence(int a[], int size){
    int first = first_occurence(a,size,1);

    return size-first;
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
        cout<<endl;
        printArray(a,size);
        cout<<"First occurence of 1: "<<" "<<first_occurence(a,size,1)<<endl;
        cout<<"Total count of 1: "<<count1_occurence(a,size)<<endl;
    }
    return 0;
}