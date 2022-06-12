/*
 Left Rotate Array by one
*/

#include <bits/stdc++.h>
using namespace std;

void leftRoatate(int a[], int size){
    int first_element = a[0];
    
    for(int i=1; i<size; i++){
        a[i-1] = a[i];
    }
    a[size-1] = first_element;
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
        leftRoatate(a,size);
        cout<<"Array after moving Zeros: ";
        printArray(a,size);
    }
    
    return 0;
}