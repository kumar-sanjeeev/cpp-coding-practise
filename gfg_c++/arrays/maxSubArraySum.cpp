
#include <bits/stdc++.h>
using namespace std;

//naive solution
int maxSubArray(int a[], int size){
    int result = a[0];

    for(int i=0; i<size; i++){
        int current_sum = 0;
        
        for(int j=i; j<size; j++){
            current_sum += a[j];
            result = max(result, current_sum);
        }
    }
    return result;
}

//efficient solution
int effi_maxSubArray(int a[], int size){
    int max_ending = a[0];
    int result = a[0];

    for(int i=1; i<size; i++){
        max_ending = max(max_ending + a[i], a[i]);
        result = max(result, max_ending);
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
        cout<<effi_maxSubArray(a, size)<<endl;
    }
    
    return 0;
}