
#include <bits/stdc++.h>
using namespace std;

int prefixSum(int a[], int size, int l, int r){

    //create the prefix sum array
    int prefix[size];
    prefix[0] = a[0];

    for(int i=1; i<size; i++){
        prefix[i] = prefix[i-1] + a[i];
    }
    if(l!=0){
        return prefix[r] - prefix[l-1];
    }
    else{
        return prefix[r];
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
        int l, r;
        cout<<"Enter the value of l and r: ";
        cin>>l>>r;
        printArray(a,size);
        cout<<endl;
        cout<<prefixSum(a,size,l,r)<<endl;
    }
    
    return 0;
}