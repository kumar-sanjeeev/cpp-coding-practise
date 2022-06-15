/*Find the maximum Circular SubArray Sum*/

#include <bits/stdc++.h>
using namespace std;

//Naive solution
int maxCircular(int a[], int size){
    int result = a[0];

    for(int i=0; i<size; i++){
        int current_max = a[i];
        int current_sum = a[i];

        for(int j=1; j<size; j++){
            int index =(i+j)%size;
            current_sum += a[index];

            current_max = max(current_max, current_sum);
        }

        result = max(result, current_max);
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
        cout<<maxCircular(a, size)<<endl;
    }
    
    return 0;
}