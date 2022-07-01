/**
 * @file maxGuest.cpp
 * @author Sanjeev Kumar
 * @brief Meeting the maximum no of Guests
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int maxGuest(int a[], int d[], int size){
    // sort both the arrays
    sort(a,a+size);
    sort(d,d+size);

    int i=1; int j=0; int result=1; int current=1;

    while(i<size && j<size){
        if(a[i]<=d[j]){
            current++;
            i++;
        }
        else{
            current --;
            j++;
        }

        result = max(result, current);
    }

    return result;
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

        int b[size];
        cout<<"\nEnter the elements of the array: ";
        for(int i=0; i<size; ++i){
            cin>>b[i];
        }
        printArray(a,size);
        printArray(b,size);
        cout<<"Maximum no of guests that you meet in the meeting: "<<maxGuest(a,b,size)<<endl;
    }
    return 0;
}