/*
Problem: Move all zeros to the end, keeping the order of rest of elements
        same
*/

#include <bits/stdc++.h>
using namespace std;

/* My logic*/
void moveZeros(int a[], int size){
    int count_zeros = 0;
    for(int i=0; i<size; i++){
        if(a[i]!=0){
            swap(a[i],a[count_zeros]);
            count_zeros++;
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
        printArray(a,size);
        moveZeros(a, size);
        cout<<"Array after moving Zeros: ";
        printArray(a,size);
    }
    
    return 0;
}