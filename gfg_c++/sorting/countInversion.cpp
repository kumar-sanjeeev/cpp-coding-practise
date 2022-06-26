/**
 * @file countInversion.cpp
 * @author Sanjeev Kumar
 * @brief Count the inversion in the given array
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

// naive solution
int naive_countInversion(int a[], int size){
    int count = 0;

    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(a[j] < a[i])
            {
                count++;
            }
        }
    }
    return count;
}

// efficient solution using merge sort concept

int inversionMerge(int a[], int low, int mid, int high){
    int left_size = mid-low+1;
    int right_size = high-mid;

    // creating two aux arrays
    int left [left_size];
    int right [right_size];

    // copy elements to these arrays
    for(int i=0; i<left_size; i++){
        left[i] = a[low+i];
    }
    for(int i=0; i<right_size; i++){
        right[i] = a[mid+1+i];
    }

    // merge these two aux arrays in sorted form
    int p1=0; int p2=0; int k=low; int inversion = 0;

    while(p1<left_size && p2<right_size){
        if(left[p1] <= right[p2]){
            a[k] = left[p1];
            p1++;
            k++;
        }
        else{
            a[k] = right[p2];
            inversion = inversion + (left_size-p1);  // most important step (denotes how many elements can form inversion)
            p2++;
            k++;
        }
    }

    while(p1 < left_size){
        a[k] = left[p1];
        p1++;
        k++;
    }

    while(p2 < right_size){
        a[k] = right[p2];
        p2++;
        k++;
    }

    return inversion;
}

int countInversion(int a[], int l_idx, int r_idx){
    int result = 0;
    if(r_idx > l_idx){
        int mid = l_idx + (r_idx-l_idx)/2;
        result += countInversion(a, l_idx, mid);
        result += countInversion(a, mid+1, r_idx);
        result += inversionMerge(a,l_idx,mid,r_idx);
    }
    return result;
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
        cout<<"No of inversion in given array is: "<<countInversion(a,0,size-1);
    } 
    return 0;
}