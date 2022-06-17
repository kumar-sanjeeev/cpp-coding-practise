
#include <bits/stdc++.h>
using namespace std;

bool equilibrium_point(int a[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += a[i];
    }

    int left_sum = 0;
    for(int i=0; i<size; i++){
        if(left_sum==sum-a[i]){
            return true;
        }
        left_sum += left_sum;
        sum -= a[i];
    }
    return false;
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
        cout<<equilibrium_point(a,size)<<endl;
    }
    
    return 0;
}