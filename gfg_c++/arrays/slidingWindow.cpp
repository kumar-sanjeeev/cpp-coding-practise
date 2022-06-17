/*
    Given an array of intergers and a number k, find the maximum
    sum of K consecutive numbers
*/
#include <bits/stdc++.h>
using namespace std;

 
int sum(int a[], int size, int k){
    int temp[size];
    temp[0] = a[0];

    for(int i=1; i<size; i++){
        temp[i] = a[i] + temp[i-1];
    }

    int max_sum = temp[k-1];
    int index = 0;
    for(int i=k; i<size; i++){
        max_sum = max((temp[i]-temp[index]), max_sum);
        index++;
    }
    return max_sum;
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
         int k;
        cout<<"\nEnter the value of k: ";
        cin>>k;
        printArray(a,size);
        cout<<endl;
        cout<<sum(a,size,k)<<endl;
    }
    
    return 0;
}