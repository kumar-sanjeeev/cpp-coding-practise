/**
 * @file selectionSort.cpp
 * Sanjeev kumar
 * Selection Sort (Not Stable: do not maintain exact order of equal items) (In place algo)
 * @version 0.1
 * @date 2022-06-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

/**
 * @Logic:
 * Find the first min element and put at first place
 * Find second min element and put at second place
 *
*/

void selectionSort(int a[], int size){
    for(int i=0; i<size; i++)
    {
        int min_idx = i;
        for(int j=i+1; j<size; j++)
        {
            if(a[j]<a[min_idx])
            {
                min_idx = j;
            }
        }
        swap(a[min_idx], a[i]);
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
        printArray(a,size);
        cout<<"Running Bubble Sort: ";
        selectionSort(a, size);
        printArray(a,size);
    }
    
    return 0;
}