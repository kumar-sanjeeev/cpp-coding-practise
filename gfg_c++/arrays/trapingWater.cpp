
#include <bits/stdc++.h>
using namespace std;

int trapWater(int a[], int size){
    int result = 0;
    
    // running loop except the corner elements
    for(int i=1; i<size-1; i++){
        int l_max = a[i];
        //finding the left max element
        for(int j=0; j<i; j++){
            l_max = max(a[j], l_max);
        }

        //finding the right max element
        int r_max = a[i];
        for(int j=i+1; j<size; j++){
            r_max = max(r_max, a[j]);
        }
        result = result+ (min(r_max,l_max)-a[i]);
    }
    return result;
}

// efficient solution TC: O(n)

int effi_trapWater(int a[], int size){
    int result = 0;

    int rmax[size];
    int lmax[size];

    lmax[0] = a[0];
    rmax[size-1] = a[size-1];

    //creating the lmax array
    for(int i=1; i<size; i++){
        lmax[i] = max(lmax[i-1],a[i]);
    }

    //creating the rmax array
    for(int i=size-2; i>=0; i--){
        rmax[i] = max(rmax[i+1],a[i]);
    }

    for(int i=1; i<size-1; i++)
    {
        result = result + (min(lmax[i],rmax[i])-a[i]);
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
        cout<<effi_trapWater(a,size)<<endl;
    }
    
    return 0;
}