/**
 * @file naivePartition.cpp
 * @author Sanjeev Kumar
 * @brief Partition the given array about the given pivot element and return the index of pivot element
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
 * Create temp array of same size
 * First copy all elements that are smaller than pivot
 * Copy the elements that are equal to pivot (to maintain stability)
 * Store the result == index of pivot element
 * Copy the elements that are larger than pivot
 * Copy the elements from temp array to original array
 */


void printArray(int a[], int size){
    for(int i=0; i<size; ++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int naivePartition(int a[], int low, int high, int p){
    int size = high-low+1;
    int pivot = a[p];
    int temp[size];

    int index = 0;
    //copy the smaller elements to this temp array
    for(int i=low; i<=high; i++){
        if(a[i] < pivot ){
            temp[index] = a[i];
            index ++;
        }
    }
    // copy the elements that are equal to pivot
    for(int i=low; i<=high; i++){
        if(a[i] == pivot){
            temp[index] = a[i];
            index ++;
        }
    }
    int result = low+index-1;     // low is offset and why index-1 bcz index value increased in above for loop

    // copy the rest of elements that are larger than pivot
    for(int i=low; i<=high; i++){
        if(a[i]> pivot){
            temp[index] = a[i];
            index++;
        }
    }

    // copy back the elements from the temp array to original arrays
    for(int i=low; i<=high; i++){
        a[i] = temp[i-low];                // this is imp step
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
        cout<<endl;
        printArray(a,size);
        cout<<"Pivot element index is: "<<naivePartition(a,0,size-1,0);
    } 
    return 0;
}