/**
 * @file chocolateDist.cpp
 * @author Sanjeev kumar
 * @brief Find the min difference between the max and min chocolate
 * @version 0.1
 * @date 2022-07-01
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

int chocolateDist(int a[], int size, int m){
    if (m>size){
        return -1;
    }
    // sort the array
    sort(a,a+size);

    int result = INT_MAX;

    for(int i=m-1; i<size; i++){
        result = min(result, a[i]-a[i-(m-1)]);
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

        cout<<"Enter the no of students: ";
        int n;
        cin>>n;

        printArray(a,size);
        cout<<endl;
        cout<<chocolateDist(a,size,n);
        cout<<endl;
    }
    return 0;
}