/**
 * @file lomutoPartition.cpp
 * @author Sanjeev Kumar
 * @brief Lomuto parition (Efficient algo for partition and it is unstable)
 * @version 0.1
 * @date 2022-06-26
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

// assuming here that last element of the array is always the pivot element
int lomutoPartition(int a[], int low, int high){
    int pivot = a[high];
    int lower_window = low-1;

    for(int i=low; i<=high-1; i++){
        if(a[i]<pivot){
            lower_window ++;        // increase the lower window size;
            swap(a[lower_window], a[i]);
        }
    }
    // swap next to last element in the smaller element window with the pivot
    swap(a[lower_window+1], a[high]);                // swap(a[p], a[high]) (if pivot index is given)

    return lower_window + 1;
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
        cout<<"Pivot element index is: "<<lomutoPartition(a, 0, size-1);
    }
    
    return 0;
}