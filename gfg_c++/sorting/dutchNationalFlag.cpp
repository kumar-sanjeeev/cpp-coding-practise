/**
 * @file dutchNationalFlag.cpp
 * @author Sanjeev Kumar
 * @brief Sort the os,1s and 2s (Dutch National Flag Algo)
 * @version 0.1
 * @date 2022-07-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void DNF(int a[], int size){
    /**
     * @logic
     * Maintaining 4 sections:
     * 1) 0 - low-1 : 0s
     * 2) low - mid-1 : 1s
     * 3) mid - high : unknowns
     * 4) high+1 - size-1 : 2s
     */

    int low=0; int mid=0; int high=size-1;
    while(mid<=high)   // just shifting mid and high
    {
        if(a[mid]==0){
            // increase window 0-low
            swap(a[low],a[mid]); // why bcz i want to put zero's in this window
            low++;
            mid++;
        }
        else if (a[mid]==1){
            mid ++; // increasing 1s window
        }
        else{
            swap(a[mid], a[high]);  // want to put unknowns in the last window
            high--;
        }

    }

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
        DNF(a, size);
        printArray(a,size);
    }
    return 0;
}