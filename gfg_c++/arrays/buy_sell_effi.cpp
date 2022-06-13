
#include <bits/stdc++.h>
using namespace std;

int buy_sell(int a[], int size){
    int profit = 0;

    for(int i=1; i<size; i++){
        if(a[i]>a[i-1])
        {
            profit +=a[i]-a[i-1];
        }
    }

    return profit;
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
        cout<<buy_sell(a,size)<<endl;
    }
    
    return 0;
}