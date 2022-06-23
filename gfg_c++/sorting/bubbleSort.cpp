/**
 * @file bubbleSort.cpp
 * Sanjeev Kumar
 * @bubble Sort
 * @version 0.1
 * @date 2022-06-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int size)
{
    // we know size-1 pass is needed in bubble sort
    int i = size-1;
    while(i>=0)
    {
        for(int j=0; j<size-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
        i--;
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
        printArray(a,size);
        cout<<"Running Bubble Sort: ";
        bubbleSort(a,size);
        printArray(a,size);
    }
    
    return 0;
}