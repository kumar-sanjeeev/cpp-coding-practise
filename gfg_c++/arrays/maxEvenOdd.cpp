/*Find the maximum length of EVEN-ODD Subarray*/

#include <bits/stdc++.h>
using namespace std;

//My logic TC(o(n)) and SC(o(n))
int maxEvenOdd(int a[], int size){
    int temp[size];
    for(int i=0; i<size; i++){
        if(a[i]%2==0){
            temp[i] = 0;
        }
        else{
            temp[i] = 1;
        }
    }
    int max_length =1;
    for(int i=0; i<size-1; i++){
        if(temp[i]==temp[i+1]){
            max_length = 1;
        }
        else{
            max_length++;
        }
    }
    return max_length;
}

//Efficient Solution based on credence algo
int effi_maxEvenOdd(int a[], int size){
    int result = 1;
    int current = 1;

    for(int i=1; i<size; i++){
        if((a[i]%2==0 && a[i-1]%2 !=0) or (a[i]%2!=0 && a[i-1]==0)){
            current++;
            result = max(result, current);
        }
        else{
            current = 1;
        }
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
        printArray(a,size);
        cout<<endl;
        cout<<maxEvenOdd(a, size)<<endl;
    }
    
    return 0;
}