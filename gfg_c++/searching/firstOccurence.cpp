/*
Search the first occurence of the element in the given Sorted Array
*/


#include <bits/stdc++.h>
using namespace std;

int recursive_first_occurence(int a[], int low, int high, int x){
    if(low>high){
        return -1;
    }

    //calculate midpoint
    int mid = (low+high)/2;

    // different cases
    if(a[mid]<x){
        return recursive_first_occurence(a,mid+1,high,x);
    }
    else if (a[mid]>x){
        return recursive_first_occurence(a,low,mid-1,x);
    }
    else{
        if(mid==0 || (a[mid-1]!=a[mid])){
            return mid;
        }
        else{
            return recursive_first_occurence(a,low,mid-1,x);
        }
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
        cout<<recursive_first_occurence(a,0,size-1,x);
    }
    
    return 0;
}