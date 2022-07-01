/**
 * @file kthSmallestEle.cpp
 * @author Sanjeev Kumar
 * @brief Find the kth smallest element in the array
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

/**
 * @logic 
 * This question is solved by quickSelect algo
 */

int partition(int a[], int low, int high){
    int pivot = a[high];
    int window = low-1;

    for(int i=low; i<=high-1; i++){
        if(a[i]< pivot)
        {
            window++;
            swap(a[window], a[i]);
        }
    }

    swap(a[window+1], a[high]);             // window+1 pos element is greater than pivot

    return window+1;
}

int kthElement(int a[], int size, int k){
    int low = 0;
    int high = size-1;

    while(low<=high)
    {
        int p = partition(a,low,high);
        if(p==k-1){
            return p;
        }
        else if(p<k-1)
        {
            low = p+1;
        }
        else{
            high = p-1;
        }
    }
    return -1;
}
void quickSort(int a[], int low, int high){
    if(high > low)
    {
        int p = partition(a,low,high);
        quickSort(a,low,p-1);
        quickSort(a,p+1,high);
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

        int k;
        cout<<"Enter the value of K: ";
        cin>>k;
        cout<<endl;
        printArray(a,size);
        cout<<"Kth element is: "<<kthElement(a,size,k)<<endl;
    }
    
    return 0;
}