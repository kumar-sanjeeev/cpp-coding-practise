/*
 Find the frequency of elements in the sorted array
*/

#include <bits/stdc++.h>
using namespace std;

void frequencySorted(int a[], int size){
    int freq = 1;
    for(int i=1; i<size; i++){
        if(a[i] == a[i-1]){
            freq ++;
        }
        else{
            cout<<a[i-1]<<": "<<freq<<endl;
            freq = 1;
        }
    }

    // corner cases
    if(size==0 || a[size-1]!=a[size-2]){
        cout<<a[size-1]<<": "<<1<<endl;
    }
    if(a[size-1]==a[size-2]){
        cout<<a[size-1]<<": "<<freq<<endl;
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
        printArray(a,size);
        frequencySorted(a,size);
    }
    
    return 0;
}