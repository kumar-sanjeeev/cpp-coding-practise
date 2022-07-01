/**
 * @file segPosNeg.cpp
 * @author Sanjeev Kumar
 * @brief Segregate the positive and negative no in the given array (order of segerated pos and neg no does not matter)
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

void segPosNeg(int a[], int size){
    /**
     * @brief 
     * Logic is same as Quick Sort partition method
     * I am implementing the Hoarse Partition
     */
    int i=-1; int j=size;
    
    while(true){
        do {i++;} while(a[i]<0);
        do {j--;} while(a[j]>=0);
        
        if(i>=j)
            return;
        swap(a[i],a[j]);
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
        segPosNeg(a,size);
        printArray(a,size);
    }
    return 0;
}