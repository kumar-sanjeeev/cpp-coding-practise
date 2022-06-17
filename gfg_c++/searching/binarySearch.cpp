/*
Search the given element index in the sorted array 
*/


#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int size, int x){
    int low = 0;
    int high = size-1;

    while(low<=high){
        //calculate the mid point
        int  mid = (low+high)/2;

        //three different cases
        if(a[mid]==x)
        {
            return mid;
        }
        else if (a[mid]>x)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return -1;
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
        cout<<binary_search(a,size,x)<<endl;
    }
    
    return 0;
}