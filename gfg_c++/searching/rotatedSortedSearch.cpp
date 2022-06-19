/**
 * @file rotatedSortedSearch.cpp
 * @Sanjeev Kumar
 * @Search an element in a sorted and roatated array
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;

int search_roated_sorted(int a[], int size, int x){
    int low = 0;
    int high = size-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==x){
            return mid;
        }
        //now look which half is sorted
        if(a[low]<a[mid]){
            // now look if element is present in left range or not
            if(x>=a[low] && x<a[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        // if right half is sorted
        else{
            //check if element is present in right range
            if(x>a[mid] && x<=a[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
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
        int x;
        cout<<"Enter the value of x: ";
        cin>>x;
        cout<<endl;
        printArray(a,size);
        cout<<"Index of element x is: "<<search_roated_sorted(a,size,x)<<endl;

    }
    return 0;
}