#include <bits/stdc++.h>
using namespace std;

/*
Leaders in the array.
IF all elements to the right of the elements are greater than it is leader
*/


//Naive Solution TC(n**2)
void leadersArray(int a[], int size){
    for(int i=0; i<size; i++){
        bool flag = false;
        for(int j=i+1; j<size; j++)
        {
            if(a[i]<=a[j]){
                flag = true;
                break;
            }
        }
        if(flag==false){
            cout<<a[i]<<" ";
        }
    }
}

// solution2: Efficient TC(n)

void effi_leaders(int a[], int size){
    int current_leader = a[size-1];    // rightmost element is always leaders
    cout<<current_leader<<" ";

    for(int i=size-2; i>=0; i--){
        if(current_leader<a[i]){
            current_leader = a[i];
            cout<<current_leader<<" ";
        }
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
        // leadersArray(a,size);
        effi_leaders(a, size);
    }
    
    return 0;
}