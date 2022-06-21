/**
 * @file insertionSort.cpp
 * @author your name (you@domain.com)
 * @Insertion Sort standard algo
 * @version 0.1
 * @date 2022-06-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <bits/stdc++.h>
using namespace std;

// mylogic implementation
void insertionSort(int a[], int size){
    for(int i=1; i<size; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(a[j]>a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

//gfg logic implementation

void insertionSort2(int a[], int size){
    for(int i=1; i<size; i++)
    {
        int current_ele = a[i];
        int last_index_sorted = i-1;

        // moving left in the left sorted array
        while(last_index_sorted>=0 && a[last_index_sorted]>current_ele)
        {
            a[last_index_sorted+1] = a[last_index_sorted];
            last_index_sorted --;
        }
        a[last_index_sorted+1] = current_ele;
    }
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
        cout<<"Without sorting: ";
        printArray(a,size);
        insertionSort2(a,size);
        cout<<"\nAfter Insertion Sort: ";
        printArray(a,size);
    }
    
    return 0;
}