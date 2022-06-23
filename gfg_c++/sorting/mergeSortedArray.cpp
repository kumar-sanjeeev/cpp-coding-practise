/**
 * @file mergeSortedArray.cpp
 * Sanjeev
 * Merge two sorted array : In this question print the elements
 * @version 0.1
 * @date 2022-06-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

void mergeSortedArray(int a[], int b[], int size1, int size2)
{
    int p1=0;
    int p2=0;
    while(p1<size1 && p2<size2){

        if(a[p1]<=b[p2])
        {
            cout<<a[p1]<< " ";
            p1++;
        }
        else
        {
            cout<<b[p2]<< " ";
            p2++;
        }
    }

    while(p1<size1){
        cout<<a[p1]<<" ";
        p1++;
    }
    while(p2<size2){
        cout<<b[p2]<<" ";
        p2++;
    }    
}
void printArray(int a[], int size){
    for(int i=0; i<size; ++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size1, size2;
    cout<<"Enter the size of array1: ";
    cin>>size1;
    int a[size1];
    cout<<"Enter the elements of array1: ";
    for(int i=0; i<size1; i++)
    {
        cin>>a[i];
    }

    cout<<"\nEnter the size of array2: ";
    cin>>size2;
    int b[size2];
    cout<<"Enter the elements of array2: ";
    for(int i=0; i<size2; i++)
    {
        cin>>b[i];
    }
    cout<<endl;
    mergeSortedArray(a,b,size1,size2);
    return 0;
}