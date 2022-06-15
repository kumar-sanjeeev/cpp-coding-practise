
#include <bits/stdc++.h>
using namespace std;

int maxConsecutive(int a[], int size){
    int current_max = 0;
    int count = 0;

    for(int i=0; i<size; i++){
        if(a[i]==1){
            count ++;
            current_max = max(current_max, count);
        }
        else
        {
            count = 0;
        }
    }
    return current_max;
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
        cout<<maxConsecutive(a, size)<<endl;
    }
    
    return 0;
}