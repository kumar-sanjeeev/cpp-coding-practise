/*
 Left Rotate Array by d position
*/

#include <bits/stdc++.h>
using namespace std;

// solution 1: Naive approach
void leftRoatate(int a[], int size, int d){
    while(d--){
        int first_element = a[0];
    
        for(int i=1; i<size; i++){
            a[i-1] = a[i];
        }
        a[size-1] = first_element;
    }  
}

// solution 2: TC(n) SC(d)
void effi1_leftRoatate(int a[], int size, int d){
    int temp[d];

    for(int i=0; i<d; i++){
        temp[i] = a[i];
    }

    for(int i=d; i<size; i++){
        a[i-d] = a[i];
    }

    for(int i=0; i<d; i++){
        a[size-d+i] = temp[i];
    }
}

//solution 3: TC(n), SC(1)
void effi2_leftRotate(int a[], int size, int d){
    reverse(a,0, d-1);
    reverse(a,d,size-1);
    reverse(a,0,size-1);
}

void reverse(int *p, int low, int high){
    while(low<high){
        swap(*(p+low), *(p+high));
        low++;
        high--; 
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
        cout<<"Enter the value of d: ";
        int d;
        cin>>d;
        printArray(a,size);
        // leftRoatate(a,size,d);
        // effi1_leftRoatate(a,size,d);
        effi2_leftRotate(a, size, d);
        cout<<"Left Roatated Array: ";
        printArray(a,size);
    }
    return 0;
}