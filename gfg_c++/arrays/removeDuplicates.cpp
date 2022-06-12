#include <bits/stdc++.h>
using namespace std;

/* My logic*/
int removeDuplicates(int *p, int size){
    int temp = *(p+0) ;
    int count = 0;
    int reduced_size = 1;
    for(int i=1; i<size; i++){
        if(*(p+i)!= temp){
            *(p+i-count) = *(p+i);
            temp = *(p+i);
            count = 0;
            reduced_size++;
            continue;
        }
        else{
            count++;      
        }
    }
    return reduced_size;
}

/*More easy approach with same TC and SC*/

int effi_remove(int *p, int size){ 
    int result = 1;
    for(int i=1; i<size; i++){
        if(*(p+i)!=*(p+result-1))
        {
            *(p+result) = *(p+i);
            result++;
        }
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
        // int new_size = removeDuplicates(a, size);
        int new_size = effi_remove(a, size);
        cout<<"Array after removing duplicates: ";
        printArray(a,new_size);
    }
    
    return 0;
}