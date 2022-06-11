#include <bits/stdc++.h>
using namespace std;

void print(int a[], int size)
{
    for(int i=0; i<size; ++i){
        cout<<a[i]<<" ";
    }
}


int largest_index(int a[], int size){
    int temp = a[0];
    int idx = 0;

    for(int i=1; i<size; ++i){
        if(temp<a[i]){
            temp = a[i];
            idx = i;
        }
    }
    return idx;
}

int second_largest(int a[], int size){
    int idx_first_largest = largest_index(a,size);

    int result = -1;

    for(int i=0; i<size; i++){
        if(a[i]!=a[idx_first_largest]){

            if(result==-1){
                result = i;
            }
            else if (a[i]>a[result]){
                result = i;
            }
        }
    }

    return result;
}

// efficeint solution. Single traversal
int effi_second_largest(int a[], int size){
    int result = -1;
    int largest = 0;

    for(int i=1; i<size; i++){
        if(a[i]>a[largest]){
            result = largest;
            largest = i;
        }
        else if (a[i]!=a[largest]){
            if (result==-1 || a[i]>a[result])
            {
                result = i;
            }
        }
    }
    return result;
}
int main(){
    int a[5] {5,20,12,20,10};
    cout<<effi_second_largest(a,5)<<endl;
    return 0;
}