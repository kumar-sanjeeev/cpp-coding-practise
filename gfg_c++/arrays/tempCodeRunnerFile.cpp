/*
 Maximum Difference value of arr[j]-arr[i] where j>i
*/

#include <bits/stdc++.h>
using namespace std;

int maxDifference(int a[], int size){
    int max_diff = 0;

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size;j++)
        {
            int local_diff = a[j]-a[i];
            if(local_diff>max_diff){
                max_diff = local_diff;
            }
        }
    }

    return max_diff;
}

//Solution2 : Efficient

int effi_maxDifference(int a[], int size){
    int max_diff = a[0] - a[1];
    int min_val = a[0];

    for(int i=1; i<size; i++){
        max_diff = max(max_diff, a[i]-min_val);
        min_val = min(min_val, a[i]);
    }

    return max_diff;
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
        // int max_diff = maxDifference(a, size);
        int max_diff = effi_maxDifference(a,size);
        cout<<"Maximum Difference: "<<max_diff<<endl;

    }
    
    return 0;
}