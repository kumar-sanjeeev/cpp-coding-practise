/**
 * @file stdMergeSort.cpp
 * @author Sanjeev Kumar
 * @brief Write the standard Merge Sort Algorithm
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

void merge( int a[], int low, int mid, int high){
    int left_size = mid-low+1;
    int right_size = high-mid;

    // create auxiliary left and right array
    int left[left_size] ;
    int right[right_size] ;

    // copy elements in right and left arrays from original array
    for(int i=0; i<left_size; i++){
        left[i] = a[low+i];
    }
    for(int i=0; i<right_size; i++){
        right[i] = a[mid+1+i];
    }

    // merge two sorted arrays into single array
    int p1=0, p2=0, k=low;                         // k = low is important
    while(p1 < left_size && p2< right_size){

        // check whose element is small
        if(left[p1] <= right[p2]){
            a[k] = left[p1];
            p1++;
            k++;
        }
        else{
            a[k] = right[p2];
            p2++;
            k++;
        }
    }

    // for pending elements
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
}

// main mergeSort function
void mergeSort(int a[], int l_idx, int r_idx){

    // apply mergesort if there are atleast two elements
    if(r_idx > l_idx){
        int mid = l_idx + (r_idx - l_idx)/2;
        mergeSort(a, l_idx, mid);
        mergeSort(a, mid+1, r_idx);
        merge(a, l_idx, mid, r_idx);
    }
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Enter the no of test cases: ";
    int t;
    cin >> t;
    while (t--)
    {

        cout << "\nEnter the size of array: ";
        int size;
        cin >> size;
        int a[size];
        cout << "\nEnter the elements of the array: ";
        for (int i = 0; i < size; ++i)
        {
            cin >> a[i];
        }
        cout << endl;
        printArray(a, size);
        mergeSort(a,0,size-1);
        printArray(a,size);
    }

    return 0;
}
