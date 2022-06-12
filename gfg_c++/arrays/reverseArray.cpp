#include <bits/stdc++.h>
using namespace std;

/*
This is new thing I have learned 
Means how to pass the array in the function using ptr
and modify the same array in the function without creating 
any copy.
*/
void reverseArray(int *p, int size){
    int low = 0;
    int high= size-1;

    while(low<high){
        int temp = *(p+low);
        *(p+low) = *(p+high);
        *(p+high) = temp;
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
        printArray(a,size);
        reverseArray(a, size);
        cout<<"Array after reverse: ";
        printArray(a,size);
    }
    
    return 0;
}