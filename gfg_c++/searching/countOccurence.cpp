/**
 * @file countOccurence.cpp
 * @Sanjeev Kumar
 * @Count the occurence of the specific element in the sorted array
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

int last_occurence(int a[], int size, int x){
    int low = 0;
    int high = size-1;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]>x){
            high = mid-1;
        }
        else if (a[mid]<x){
            low = mid+1;
        }
        else{
            if(a[mid+1] != a[mid] || mid==size-1){
                return mid;
            }
            else{
                low = mid+1;
            }
        }
    }
    return -1;
}

int occurence(int a[], int size, int x){
    int first = first_occurence(a,size,x);

    //means if there is no first occurence of element, then its count is Zero
    if(first==-1){
        return 0;
    }
    else{
        int last = last_occurence(a,size,x);
        return (last-first+1);
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
        int x;
        cout<<"Enter the element you want to search: ";
        cin>>x;
        printArray(a,size);
        cout<<"First occurence of: "<<x<<" "<<first_occurence(a,size,x)<<endl;
        cout<<"Last occurence of: "<<x<<" "<<last_occurence(a,size,x)<<endl;
        cout<<"Total occurence of: "<<x<<" "<<occurence(a,size,x)<<endl;
    }
   
    return 0;
}